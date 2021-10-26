/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=rand();
	int m,n;
	printf("╟ы╩ф╚ы│д║═┐э");
	scanf("%d,%d",m,n);
	printf("%d",a);
	return 0;
}*/




#include<stdlib.h>
int main()
 {
	int m,n,h[100],c;
	int i,j,k=0,p;
	printf("и║?ии?икивж╠????yи║??идижи┤3?и░??идижи┤бъo");
	scanf("%d,%d",&m,&n);
	
	//и░?бф??3?ж╠
	for(k=0; k<m*n; k++) 
	{
		h[k]=rand();
		p=0;//бфио0?aи║?бъ?ж╠?kб└ии??иоD?T??ж╠t??
		while(p<k) {
			if(h[k]==h[p]) 
			{
				h[k]=rand();
				p=0;//ии?1???ж╠t?ик??D??3?ж╠2бщбу?p1ижив?
			} else
				p++;//бд??и░?икики┤??б└ии??
		}
	}
	k=0;//??k1ижив?бъ????и╣?бьж╠??гд????DD??D?????
	for(i=1; i<=m; i++) {
		for(j=1; j<=n; k++,j++) {
			if(i-1==0)
				if(j-1==0)
					c=1;//б┴иоиж???
				else if(j+1>j)
					c=2;//иои░иж???
				else
					c=3;//б┴?иж?б└?
			if(i+1>i)
				if(j-1==0)
					c=4;//б┴ио????
				else if(j+1>j)
					c=5;//иои░????
				else
					c=6;//б┴???б└?
			if(j-1==0&&i-1!=0&&i+1<=i)
				c=7;//б┴?б┴иоб└?
			if(j+1>j&&i-1!=0&&i+1<=i)
				c=8;//б┴?иои░б└?

			switch(c) {
				case 1:
					h[k]=(h[k]+h[k+1]+h[k+n],h[k+n+1])/4;
					break;
				case 2:
					h[k]=(h[k]+h[k-1]+h[k+n]+h[k+n-1])/4;
					break;
				case 3:
					h[k]=(h[k]+h[k-1]+h[k+1]+h[k+n]+h[k+n-1]+h[k+n+1])/6;
					break;
				case 4:
					h[k]=(h[k]+h[k+1]+h[k-n]+h[k-n+1])/4;
					break;
				case 5:
					h[k]=(h[k]+h[k-1]+h[k-n]+h[k-n-1])/4;
					break;
				case 6:
					h[k]=(h[k]+h[k-1]+h[k+1]+h[k-n-1]+h[k-n]+h[k-n+1])/6;
					break;
				case 7:
					h[k]=(h[k]+h[k+1]+h[k-n]+h[k-n+1]+h[k+n]+h[k+n+1])/6;
					break;
				case 8:
					h[k]=(h[k]+h[k-1]+h[k-n]+h[k-n-1]+h[k+n]+h[k+n-1])/6;
					break;
				default :
					h[k]=(h[k]+h[k-1]+h[k+1]+h[k+n]+h[k+n-1]+h[k+n+1]+h[k-n-1]+h[k-n]+h[k-n+1]);
					break;

			}
		}
	}
	p=0;
	for(i=1; i<=m; i++) {
		for(j=1; j<=n; p++,j++) {
			printf("%15d",h[p]);
		}
		putchar('\n');
	}
	return 0;
}

