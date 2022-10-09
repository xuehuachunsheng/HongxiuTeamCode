#include <stdio.h>
#include <stdlib.h> 
// 用宏定义数据类型 
#define ElemType double

// 定义一个链表的节点
typedef struct LNode
{
	// 数据域
	ElemType data;
	// 指针域 
	struct LNode *next;
}LinkNode;

// 整体建立链表 -- 尾插法 
void CreateListR(LinkNode *&L, ElemType a[], int n)
{
	// 分配头节点空间 
	L = (LinkNode *)malloc(sizeof(LinkNode));
	LinkNode *r = L; // r 始终指向最后一个节点 
	int i = 0;
	while (i < n) // 意味着a里面还有元素没有放到链表里面去 
	{
		// 分配新节点空间 
		LinkNode *new_node = (LinkNode *)malloc(sizeof(LinkNode));
		new_node->data = a[i];
		
		// 一定得有 
		new_node->next = NULL;
		
		// 指针指向改变 
		r->next = new_node;
		r = new_node;
		i++;  
	} 
}

// 初始化链表 
void InitList(LinkNode *&L)
{
	L = (LinkNode *)malloc(sizeof(LinkNode));
	L->next = NULL;
}

void DestroyList(LinkNode *&L)
{
	LinkNode *p = L->next;
	while (p != NULL)
	{
		// 将p的后继节点赋值给L的后继 
		L->next = p->next;
		// 释放p 
		free(p);
		p = L->next;
	}
	free(L);
	L=NULL;
}

bool ListEmpty(LinkNode *L)
{
	return L->next == NULL;
}

// 求链表的元素个数 
int ListLength(LinkNode *L)
{
	LinkNode *p = L->next;
	int n=0; // 元素个数 
	while (p != NULL)
	{
		n++; // 累计p指向的数据元素 
		p = p->next;
	}
	return n;
}

void DispList(LinkNode *L)
{
	LinkNode *p = L;
	while(p->next != NULL)
	{
		p = p->next;
		printf("%f\n", p->data);
	}
}

// 输出下标为i的元素值
bool GetElem(LinkNode *L, int i, ElemType &e)
{
	LinkNode *p = L;
	int j = -1;
	while(p->next != NULL)
	{
		p = p->next;
		j++;
		if (j == i) // 找到了下标为i的元素位置了。
		{
			e = p->data;
			return true;
		}
	}
	return false; //表明没找到下标为i的元素
}

// 查找链表中值为e的元素下标
int LocateElem(LinkNode *L, ElemType e)
{
	LinkNode *p = L;
	int i = -1;
	while (p->next != NULL)
	{
		p = p->next;
		i++;
		//printf("i=%d, p->data=%f, e=%f\n", i, p->data, e);
		if (p->data == e)
			return i;
	}
	return -1;
}

// 在下标为i的位置处插入元素e
bool InsertElement(LinkNode *L, int i, ElemType e)
{
	LinkNode *p = L;
	int j = 0;
	while (p->next != NULL && j++ < i)
		p = p->next;
	
	if (j < i || i < 0)
	{
		printf("The insertion index is illegal! i=%d\n",i);
		return false;
	}
		
	LinkNode *s = (LinkNode *)malloc(sizeof(LinkNode));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}

// 删除值为e的元素
bool DeleteElement(LinkNode *L, ElemType e)
{
	return false;
}

// 删除值最大的节点
bool DeleteMaxElement(LinkNode *L, ElemType &e)
{
	// 如果本身L这个链表没有元素，直接就返回了呗
	if (L->next == NULL) 
		return false;

	LinkNode *maxp = L->next; // 用来指向值最大的那个节点
	LinkNode *maxp_pri = L; // 用来指向值最大的那个节点的前驱

	LinkNode *p_pri = L; // 用来遍历，它总是在p之前
	LinkNode *p = L->next; // 用来遍历的
	
	while(p->next != NULL)
	{
		p_pri = p_pri->next;
		p = p->next;
		// 判断下一个节点是否大于maxp的数据域
		if (p->data > maxp->data)
		{
			maxp_pri = p_pri;
			maxp = p;
		}
	}
	maxp_pri->next = maxp->next; //将值最大的节点的前驱的next域指向值最大的节点的next。
	e = maxp->data;
	free(maxp);
	// maxp存放了值最大的那个节点，怎么删除？
	return true;
}


int main()
{
	LinkNode *L; 
	ElemType a[] = {2.1, 0.3, 4.5, 8.7, 2.3, 1, 10, 5};
	
	CreateListR(L, a, 8);
	printf("链表创建成功！\n");
	
	int n = ListLength(L);
	printf("链表的元素个数是: %d\n", n);

	DispList(L);

	ElemType e;
	GetElem(L, 2, e);

	printf("The element value of index 2nd is: %f\n", e);

	int index = LocateElem(L, 0.3);
	printf("The index of element 1 is: %d\n", index);

	InsertElement(L, 0, 2.0);
	DispList(L);
	printf("\n");
	InsertElement(L, 3, 3.0);
	DispList(L);
	printf("\n");
	InsertElement(L, 10, 7.0);
	DispList(L);

	printf("\n");
	InsertElement(L, 100, 8.0);
	DispList(L);

	ElemType e1;
	DeleteMaxElement(L, e1);
	printf("Delete the max node.");
	DispList(L);
	printf("The max node value is: %f", e1);

	DeleteMaxElement(L, e1);
	printf("Delete the max node.");
	DispList(L);
	printf("The max node value is: %f", e1);
	
	return 0;
}
