#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//pointerrr kullan�m�

     
int main() 
{
	int sayi= 20;
	int *s=&sayi;
	
	//sayiyi ekrana yazd�rma
	printf("Deger: %d\n",sayi);
	
	//Adresi ekrana yazd�rma
	printf("adres: %x\n",s);
	
	char harf='a';
	char *h=&harf;
	printf("\n\n -- \n\n");
	
	//harfi ekrana yazd�rma
	printf("Harf: %c",harf);
	return 0;
}
