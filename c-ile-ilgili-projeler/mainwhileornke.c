#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{

	//klavyeden girilen say�n�n faktoryelini bulma
    int i,faktoryel;
	faktoryel=1;
	printf("Sayiyi giriniz: ");
	scanf("%d",&i);
	while(i>1) //birden b�y�k say�lar
	{
		faktoryel=faktoryel*i;
		i--;
	}
	
	printf("sonuc: %d",faktoryel);

	return 0;
}
