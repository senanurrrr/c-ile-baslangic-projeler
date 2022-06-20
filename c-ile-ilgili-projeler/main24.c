#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	//çok boyutlu diziler
/*	int dizi[2][2];	
	dizi[0][0]=10;
	dizi[0][1]=20;
	dizi[1][0]=30;
	dizi[1][1]=40;
	printf("Matrisin 0-0 da bulunan elemani: %d\n",dizi[0][0]);
    printf("Matrisin 0-1 da bulunan elemani: %d\n",dizi[0][1]);
	printf("Matrisin 1-0 da bulunan elemani: %d\n",dizi[1][0]);
	printf("Matrisin 1-1 da bulunan elemani: %d\n",dizi[1][1]);	
*/


    int matris[2][3]={10,20,30,40,50,60};
    
    int i,j;
    for(i=0;i<2;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d ",matris[i][j]);
		}
	        printf("\n");
	}
	
	return 0;
}
