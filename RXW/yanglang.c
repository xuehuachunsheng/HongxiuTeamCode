#include<stdio.h>
int main()
{
  int a,b,c,sum,Average,product,Smallest,Largest;
  printf("please input three numbers are:");
  scanf("%d,%d,%d",&a,&b,&c);
  sum=a+b+c;
  printf("%d",sum);
  Average=(a+b+c)/3;
  printf("%d",Average);
  product=a*b*c;
  printf("%d",product);
  if(a<b)
  {   if(c<a){
      Smallest=c;
      printf("%d",Smallest);}
      else
      {
	  Smallest=a;
      printf("%d",Smallest);
	  }
   }
   else
   Smallest=b;
   printf("%d",Smallest);
	if(a>b)
   {   if(c>a)
   {
       Largest=c;
       printf("%d",Largest);}
       else
      {
	    Largest=a;
       printf("%d",Largest);}
   }
   else{
   Largest=b;
   printf("%d",Largest);}
   return 0;
}

