#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
	char ad[10], soyad[10], yas[2], meslek[10], sehir[10];
	
	printf("Adiniz: ");
	scanf("%s",ad);
	
	printf("Soyadiniz: ");
	scanf("%s",soyad);
	
	printf("Yasiniz: ");
	scanf("%s",yas);
	
	printf("Mesleginiz: ");
	scanf("%s",meslek);
	
	printf("Sehriniz: ");
	scanf("%s",sehir);
	
	printf("\n");
	
	printf("Adi: %s - Soyadi: %s",ad,soyad);
	printf("\n");
	printf("Meslegi: %s - Sehri: %s",meslek,sehir);
	printf("\n");
	printf("Yasi: %s",yas);
	
	
	
	
	
	
	
	
	return 0;
}
