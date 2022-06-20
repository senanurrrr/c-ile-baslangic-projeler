#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	//strlen fonksiyonu kullanýmý
	char kelime[100];
	printf("Kelimeyi giriniz: ");
	scanf("%s",kelime);
	printf("Kelimenin harf Uzunlugu: %d",strlen(kelime));
	
	
	return 0;
}
