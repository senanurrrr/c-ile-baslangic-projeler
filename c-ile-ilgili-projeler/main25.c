#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int i,j,satir,sutun,k,n;
	
	printf("Satiri giriniz: ");
	scanf("%d",&satir);
	
	printf("Sutunu giriniz: ");
	scanf("%d",&sutun);
	
	int matris [satir][sutun];
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("\n Degeriniz: [%d][%d] --> ",i+1,j+1);
			scanf("%d",&matris[i][j]);
		}
	}
	printf("\n olusan matris");
	for(k=0;k<satir;k++)
	{
		for(n=0;n<sutun;n++)
		{
			printf("%d ",matris[k][n]);
		}
		    printf("\n");
	}
	
	
	return 0;
}
