#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	//matrislerde toplama iþlemi
	int m1[2][2]={1,5,7,4};
	int m2[2][2]={7,2,9,3};
	int toplam[2][2];
	
	int i,j,k,n;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			toplam[i][j]=m1[i][j]+m2[i][j];
		}
	}
	for(k=0;k<2;k++)
	{
		for(n=0;n<2;n++)
		{
		    printf("%d  ",toplam[k][n]);
	    }
	        printf("\n"); 
	}
	
	
	
	
	
	
	
	return 0;
}
