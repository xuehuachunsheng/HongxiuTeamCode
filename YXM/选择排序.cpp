
#include <stdio.h>
#include <stdlib.h>
int main( )
{  
    int a[10] , i , j , t,l;
    srand(8);
    for ( i=0 ; i<10 ; i++)
        {
		 a[i]=rand()%100;
		 printf( "%3d", a[i] );
     }
    for ( i=0 ; i<9 ; i++)
    {
    		l=i;
         for ( j=i+1 ; j<10 ; j++)
                if ( a[l]>a[j] )
                {
                	l=j;
                }
                if(l!=i)
                {    t=a[l] ;
                     a[l]=a[i] ;
                     a[i]=t ;   
                 }
	}
    printf("\n");
     for ( i=0 ; i<10 ; i++)
           printf( "%3d", a[i] );
     return 0;
}

