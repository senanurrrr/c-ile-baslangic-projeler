#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	//1 ile 100 aras� 5e tam b�l�nen say�lar:
	int i;
	for(i=1;i<=100;i++)
	{
		if(i%5==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
