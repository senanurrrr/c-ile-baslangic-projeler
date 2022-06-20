#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//pointerrr kullanýmý

     
int main() 
{
	int sayi= 20;
	int *s=&sayi;
	
	//sayiyi ekrana yazdýrma
	printf("Deger: %d\n",sayi);
	
	//Adresi ekrana yazdýrma
	printf("adres: %x\n",s);
	
	char harf='a';
	char *h=&harf;
	printf("\n\n -- \n\n");
	
	//harfi ekrana yazdýrma
	printf("Harf: %c",harf);
	return 0;
}
