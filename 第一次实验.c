#include<stdio.h>
#define MAXSIZE 30
typedef int datatype;
typedef struct
{
	datatype data[MAXSIZE];
	int last;
}SeqList;
void Union(SeqList A, SeqList B, SeqList *C);
void Intersection(SeqList A, SeqList B, SeqList *C);
void Subtraction(SeqList A, SeqList B, SeqList *C);
void print(SeqList A);
int main()
{
	SeqList A = {{20, 30, 40, 50, 60, 70, 80, 90}, 8};
	SeqList B = {{15, 25, 35, 40, 50, 55, 60, 65}, 8};
	SeqList C, D, E;
	Union(A, B, &C);
	Intersection(A, B, &D);
	Subtraction(A, B, &E);
	return 0;
}

void Union(SeqList A, SeqList B, SeqList *C)
{
	int i = 0, j = 0, k = 0;
	while(i < A.last && j < B.last)
	{
		if(A.data[i] < B.data[j])
		{
			C -> data[k] = A.data[i];
			k++, i++;
		}
		else if(A.data[i] == B.data[j])
		{
			C -> data[k] = A.data[i];
			k++, i++, j++;
		}
		else
		{
			C -> data[k] = B.data[j];
			k++, j++;
		}
	}
	while(i < A.last)
	{
		C -> data[k] = A.data[i];
		k++, i++;
	}
	while(j < B.last)
	{
		C -> data[k] = B.data[j];
		k++, j++;
	}
	C -> last = k - 1;
	printf("并集是：");
	print(*C);
}

void Intersection(SeqList A, SeqList B, SeqList *C)
{
	int i = 0, j = 0, k = 0;
	while(i < A.last&& j < B.last)
	{
		if(A.data[i] < B.data[j])
		{
			i++;
		}
		else if(A.data[i] == B.data[j])
		{
			C -> data[k] = A.data[i];
			i++, j++, k++;
		}
		else
		{
			j++;
		}
	}
	C -> last = k - 1;
	printf("交集是：");
	print(*C);
}

void Subtraction(SeqList A, SeqList B, SeqList *C)
{
	int i = 0, j = 0, k = 0;
	while(i < A.last && j < B.last)
	{
		if(A.data[i] < B.data[j])
		{
			C -> data[k] = A.data[i];
			k++, i++;
		}
		else if(A.data[i] == B.data[j])
		{
			i++, j++;
		}
		else
		{
			j++;
		}
	}
	while(i < A.last)
	{
		C -> data[k] = A.data[i];
		k++, i++;
	}
	C -> last = k - 1;
	printf("差集是：");
	print(*C);
}

void print(SeqList A)
{
	int i;
	for(i = 0; i <= A.last; i++)
	{
		printf("%-6d", A.data[i]);
	}
	printf("\n\n");
}
