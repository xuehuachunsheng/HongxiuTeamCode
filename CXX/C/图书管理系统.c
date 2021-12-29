#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max_Number 10

typedef struct
{
    int year;
    int month;
    int day;
}Date;
typedef struct
{
    char title[128];
    char author[40];
    float price;
    Date date;
    char publisher[40];
}Book;
void input_Book(Book *book);
void output_Book(Book *book);
int search_Book(Book *book);
void update_Book(Book *book);
void out(int i,Book *book);
void print();

int main()
{
    Book book[max_Number];
    int i;
	char order;
	
	for(i = 0;i < max_Number;i++)
	{
		book[i].title[0] = '\0';
		book[i].author[0] = '\0';
		book[i].price = 0;
		book[i].date.year = 0; 
		book[i].date.month = 0; 
		book[i].date.day = 0; 
		book[i].publisher[0] = '\0';
	}
	
	print();
	
	while(1)
	{
		printf("\n请输入指令:");
		order = getchar();
		getchar();
		switch(order)
		{
			case 'i':input_Book(book);break;
			case 's':search_Book(book);break;
			case 'u':update_Book(book);break;
			case 'p':output_Book(book);break;
			case 'q':printf("\n感谢使用 ^-^");exit(1);
			default:printf("\n输入错误\n请重新输入...");
		}
	}
 } 
 
 void print()
 {
 	printf("	 ==========================\n\
	|---欢迎使用图书管理系统---|\n\
	|---录入图书...........i---|\n\
	|---搜索图书...........s---|\n\
	|---更新图书...........u---|\n\
	|---显示所有图书.......p---|\n\
	|---退出系统...........q---|\n\
	 ==========================\n");
 }
 
 void input_Book(Book *book)
{
	static int i = 0;
	
    printf("	输入书名:");
   	scanf("%s",book[i].title);
    printf("	输入作者名字:");
    scanf("%s",book[i].author);
    printf("	输入售价:");
    scanf("%f",&book[i].price);
    printf("	输入出版日期:");
    scanf("%d%d%d",&book[i].date.year,&book[i].date.month,&book[i].date.day);
    printf("	输入出版社:");
    scanf("%s",book[i].publisher);
    getchar();
    i++;
};

void output_Book(Book *book)
{
	int i;
	int k = 1;

	for(i = 0;i < max_Number && book[i].title[0] != '\0';i++)
	{
		out(i,book);
		k = 0;
	}
	if(k)
	{
		printf("	未录入图书,请从重新输入指令...\n");
	}
}

int search_Book(Book *book)
{
	printf("	请输入完整书名:");
	
	char ch[128];
	int i;
	int k = 1;
	
	scanf("%s",ch);
	getchar();
	
	for(i = 0;i < max_Number;i++)
	{
		if(strcmp(book[i].title,ch) == 0)
		{
			out(i,book);
    		
    		k = 0;
    		break;
		}
	}
	if(k)
	{
		printf("	未录入《%s》图书,请从重新输入指令...\n",ch);
	}
	
	return i;	
}

void update_Book(Book *book)
{
	int i,c;
	int k = 1;
	
	do
	{
		i = search_Book(book);
	}while(i == max_Number);
	
	printf("\n	1.修改书名...\n\
	2.修改作者...\n\
	3.修改售价...\n\
	4.修改出版日期...\n\
	5.修改出版社...\n");
	scanf("%d",&c);
	getchar();
	
	while(k)
	{
		switch(c)
		{
			case 1:printf("	请输入修改后的书名:");scanf("%s",book[i].title);getchar();out(i,book);k = 0;break;
			case 2:printf("	请输入修改后的作者:");scanf("%s",book[i].author);getchar();out(i,book);k = 0;break;
			case 3:printf("	请输入修改后的售价:");scanf("%f",&book[i].price);getchar();out(i,book);k = 0;break;
			case 4:printf("	请输入修改后的出版日期:");scanf("%d%d%d",&book[i].date.year,&book[i].date.month,&book[i].date.day);getchar();out(i,book);k = 0;break;
			case 5:printf("	请输入修改后的出版社:");scanf("%s",book[i].title);getchar();out(i,book);k = 0;break;
			default:printf("\n	请重新输入...\n"); 
		}
	}
}

void out(int i,Book *book)
{
	printf("\n书名:《%s》\n",book[i].title);
    printf("作者:%s\n",book[i].author);
	printf("售价:%.2f\n",book[i].price);
	printf("出版日期:%d-%d-%d\n",book[i].date.year,book[i].date.month,book[i].date.day);
	printf("出版社:%s\n\n",book[i].publisher);	
}