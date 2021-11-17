#include<stdio.h>//scanf和printf的*号修饰符 
int main(void)
{
	unsigned width,precision;
	int number=256;
	double weight=242.5;
	   
	printf("Enter a field width:\n");
	scanf("%d",&width);//输入6 
	printf("The number is:%*d:\n",width,number);/*使用*号代替了你输入的width的字符宽度，
	并且将这个字符宽度赋予了下一个值，在本题中为precision*/ 
	printf("Now enter a width and a precision:");
	scanf("%d %d",&width,&precision);//输入8 3 
	printf("Weight=%*.*f\n",width,precision,weight);
	printf("Done!\n"); 
	return 0;
 } /*变量width提供字段宽度，number是待打印的数字，因为转换说明中*在d的前面，所以printf()的参数列表中
  ，width在number的前面。同样，width和precision提供打印weight的格式化信息
  这里用户首先输出了6,因此6是程序使用的字段宽度。类试地，接下来用户输入8和3，说明字段宽度是8，小数点
  后面显示3位数字，一般而言，程序应根据weight的值来决定这些变量的值。 
