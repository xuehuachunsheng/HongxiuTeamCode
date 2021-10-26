#include<stdio.h>
#include<stdlib.h> 
int main()
{
	int i,j,m,n;
	printf(" ‰»Î¡– ˝£∫");
	scanf("%d",&m);
	n=m; 
	for(i=1;i<=m;i++)
	{
		if(i<(m+1)/2+1){
			for(j=1;j<=n;j++)
			{
				if(i==j||i+j==n+1){
					printf(" ");
				}
				else if(j<i){
					printf("-");
				}
				else if(i+j>n+1){
					printf("*");
				}
				else{
					printf("+");
				}
			}
		}
			else {
				for(j=1;j<=n;j++){
					for(j=1;j<=n;j++){
						if(i==j||i+j==n+1)
						{
							printf(" ");
						}
						else if(j>i){
							printf("*");
						}
						else if(i+j<n+1){
							printf("-");
						}
						else printf("/");
					}
				}
				}
				printf("\n");
			}
}
