#include<stdio.h>
void up_and_down(int n);

int main(void)
{
	up_and_down(1);
	return 0;
}

void up_and_down(int n)
{
	printf("Level %d:n location %p\n",n,&n);
	if(n<4) up_and_down(n+1);
	printf("LEVEL %d:n location %p\n",n,&n);
}//递归类似于一个虫洞，从最外层进入（一级递归），到达奇点（递归终止点）之后，由奇点向虫洞另一边的最外层进发（回到另一边的最外层，也就是反一级递归）
/*形如        level 1(最外层)-->level 2-->lebel 3-->level 4(进入奇点)-->LEVEL 4(离开奇点)-->LEVEL 3-->LEVEL 2-->LEVEL 1(一级递归的最外层)	
                     一级递归-->二级递归-->三级递归-->四级递归-->反四级递归-->反三级递归-->反二级递归-->反一级递归
					 三级递归于反三级递归是一个完整的函数，只是在三级递归内部包含了四级递归，类似于一个千层饼的样式*/ 
