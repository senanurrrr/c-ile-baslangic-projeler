#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
	/*
	int sayilar[] ={1,3,5,7,9,11};
	int i;
	
	for(i=0;i<6;i++)
	{
		printf("%d\n",sayilar[i]);
	}
	*/
	
	
	int sayilar[]={1,4,8,5,9,3,2,6};
	int toplam =0;
	int i;
	
	for(i=0;i<8;i++)
	{
		toplam=toplam+sayilar[i];
	}
	printf("toplam: %d\n",toplam);
	
		
	return 0;
}
