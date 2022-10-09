#include <stdio.h>

#define ElemType double
typedef struct LNode
{
	// 数据域
	ElemType data;
	// 指针域 
	struct LNode *next;
}LinkNode;

int main()
{
	int a = 10; // 整型变量
	int *b = &a; 
	printf("b存放的地址是: %p\n", b);
	
	int **c = &b;
	printf("c存放的地址是: %p\n", c);
	
	int *d = *c;
	printf("d指向的值: %p", d);
	
	
	LinkNode *e = (LinkNode *) malloc(12); // 分配了12个字节的空间 
	
	e->data = 10;
	
	return 0;
}

// & 取址运算符
// * 解址运算符 
