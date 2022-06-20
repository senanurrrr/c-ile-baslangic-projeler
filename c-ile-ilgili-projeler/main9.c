#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{

/*
	int sayi;
	printf("Sayiyi giriniz: ");
	scanf("%d",sayi);
	if(sayi%5==0)
	{
		printf("Sayi 5'e tam bolunuyor...");
	}
	else
	{
		printf("Sayi 5'e tam bolunmuyor")
	}
*/	

/*
    int sayi;
	printf("Sayiyi girin: ");
	scanf("%d",sayi);
	
	if(sayi%3==0 && sayi%5==0)
	{
		printf("Sayi 3'e ve 5'e tam bolunuyor..");
	}
	else
	{
		printf(" ")
	}
*/	


    //klavyeden girilen dereceye göre suyun durumunu yazdýran programý kodlayýn
    
    printf("*******SUYUN DURUMU*********\n\n");
    
    int su;
    
    printf("Suyun sicaklik degerini giriniz: ");
    scanf("%d",&su);
    
    if(su<=0)
    {
    	printf("SU SUANDA BUZ HALINDE");
    }    
    if(su>0 && su<100)
    {
    	printf("SU SUANDA SIVI HALINDE");
	}
    if(su>=100)
    {
    	printf("SU SUANDA BUHAR HALINDE");
	}























	
	return 0;
}
