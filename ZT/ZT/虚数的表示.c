#include<stdio.h>
#include<stdlib.h>
typedef struct{//复数类型 
	float Realpart;//实数部分
	float Imagepart;//虚数部分 
}Complex;

Complex Create(float x,float y);
float Getreal(Complex C);
float Getimage(Complex C);
Complex Add(Complex C1,Complex C2);
Complex Sub(Complex C1,Complex C2);


Complex Create(float x,float y){//创建一个复数 
	Complex C;//创建虚数C 
	C.Realpart=x;
	C.Imagepart=y;
	return C;//返回C 
}

float Getreal(Complex C){//获取实部 
	return C.Realpart;
}

float Getimage(Complex C){//获取虚部 
	return C.Imagepart;
}

Complex Add(Complex C1,Complex C2){//加法 
	Complex sum;
	sum.Imagepart=C1.Imagepart+C2.Imagepart;
	sum.Realpart=C1.Realpart+C2.Realpart;
	return sum;
}

Complex Sub(Complex C1,Complex C2){//减法 
	Complex diff;
	diff.Realpart=C1.Realpart-C2.Realpart;
	diff.Imagepart=C1.Imagepart-C2.Imagepart;
	return diff;
}

int main(void){
	Complex C1,C2,sum;
	C1=Create(1,2);
	C2=Create(2,3);
	
	sum=Add(C1,C2);
	printf("%.f+%.fi",sum.Realpart,sum.Imagepart);
	return 0;
} 
