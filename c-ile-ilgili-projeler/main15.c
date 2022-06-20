#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	//Basamaklarý ayýrma kodu
	int sayi;
	printf("Sayiyi giriniz: ");
	scanf("%d",&sayi);
	int birler,onlar,yuzler;
	
	yuzler=sayi/100;
	printf("Yuzler basamagi: %d\n",yuzler);
	
	onlar=(sayi-yuzler*100)/10;
	printf("Onlar basamagi: %d\n",onlar);
	
	birler=sayi-yuzler*100-onlar*10;
	printf("Birler basamagi: %d\n",birler);
	
	
	
	
	
	
	
	return 0;
}
