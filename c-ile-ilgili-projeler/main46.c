#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//küp bulma iþlemi
int kupbul(int sayi)
{
	int sonuc=sayi*sayi*sayi;
	return sonuc;
}
int main() 
{
    int s;
	printf("sayiyi girin: ");
	scanf("%d",&s);
	printf("\n Sonuc: %d",kupbul(s));	
	return 0;
}
