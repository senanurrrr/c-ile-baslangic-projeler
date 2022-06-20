#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
	int s1,s2,ort;
	
	printf("**********Ogrenci ortalama hesap bilgi sistemi************");
	printf("\n\n");
	
	printf("Birinci sinav notunuzu giriniz:  ");
	scanf("%d",&s1);
	
	printf("Ikinci sinav notunuzu giriniz:   ");
	scanf("%d",&s2);
	

	ort=(s1+s2)/2;
	printf("Iki sinavin ortalamasi: %d",ort);
	printf("\n\n");
	printf("Gecti mi \ Kaldi mi? ");
	if(ort>=50)
	{
		printf("GECTI");
	}
	else
	{
		printf("KALDI");
	}
	
	return 0;
}
