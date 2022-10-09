// 双向链表
#include <stdio.h>
#include <stdlib.h>
#define ElemType double

typedef struct _DLinkNode
{
    ElemType data; // 数据域
    struct _DLinkNode *prior; // 前驱指针
    struct _DLinkNode *next; // 后继指针
} DLinkNode;

// 初始化双向链表
void InitDLinkedList(DLinkNode *&L)
{
    L = (DLinkNode *)malloc(sizeof(DLinkNode));
    L->prior = NULL;
    L->next = NULL;
}

// 使用头插法整体建立双向链表
void CreateListF(DLinkNode *&L, ElemType a[], int n)
{
    // 构建一个头节点
    L = (DLinkNode *) malloc(sizeof(DLinkNode));
    L->next = NULL;
    L->prior = NULL;
    
    for (int i=n-1; i >= 0; --i) // 逆序读取数组，数组下标从大到小的
    {
        ElemType ele = a[i]; // 当前的元素
        DLinkNode *s = (DLinkNode *) malloc(sizeof(DLinkNode));
        s->data = ele;
        DLinkNode *p = L->next; // p 指向第一个节点
        // 头节点L与s连接
        L->next = s;
        s->prior = L;
        // s与第一个节点p连接
        s->next = p;
        if (p != NULL)
            p->prior = s;
    }
}
// 遍历链表
void DispList(DLinkNode *L)
{
	DLinkNode *p = L;
	while(p->next != NULL)
	{
		p = p->next;
		printf("%f\n", p->data);
	}
}

// 在双向链表中插入节点
bool ListInsert(DLinkNode *&L, int i, ElemType e)
{
    DLinkNode *p = L;
	int j = 0;
	while (p->next != NULL && j++ < i)
		p = p->next;
	
	if (j < i || i < 0)
	{
		printf("The insertion index is illegal! i=%d\n",i);
		return false;
	}
		
	DLinkNode *s = (DLinkNode *)malloc(sizeof(DLinkNode));
	s->data = e;
    DLinkNode *r = p->next; // 记录p->next这个节点

	// p和s建立联系
    p->next=s;
    s->prior=p;
    // s和r建立联系
    s->next = r;
    if (r != NULL)
        r->prior = s;
	return true;
}

// 删除下标为i的节点
bool ListDelete(DLinkNode *&L, int i, ElemType &e)
{
    // 指针p表示需要遍历到下标为i的位置
    DLinkNode *p = L;
	int j = 0;
	while (p->next != NULL && j++ <= i)
		p = p->next;

	if (j < i || i < 0)
	{
		printf("The insertion index is illegal! i=%d\n",i);
		return false;
	}
    DLinkNode *r1 = p->prior;
    DLinkNode *r2 = p->next;
    // r1和r2建立联系
    r1->next = r2;
    if (r2 != NULL)
        r2->prior = r1;
    e = p->data;
    // 释放p所在的内存空间
    free(p);
    return true;
}

int main()
{
    DLinkNode *L;
    ElemType a[] = {1, 2, 3.5};
    printf("Build Double LinkedList. \n");
    CreateListF(L, a, 3);
    printf("Traverse The Double LinkedList: \n");
    DispList(L);

    printf("Insert Element.\n");
    ListInsert(L, 2, 3);
    printf("Traverse The Double LinkedList: \n");
    DispList(L);

    printf("Insert Element.\n");
    ListInsert(L, 4, 4);
    printf("Traverse The Double LinkedList: \n");
    DispList(L);

    printf("Delete Element.\n");
    ElemType e;
    ListDelete(L, 1, e);
    printf("The Double LinkedList After Delete: \n");
    DispList(L);
    return 0;
}
