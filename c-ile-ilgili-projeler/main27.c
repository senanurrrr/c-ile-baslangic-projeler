#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	//sqrt karekök alma fonksiyonu
	int sayi;
	double sonuc;
	printf("Sayiyi giriniz: ");
	scanf("%d",&sayi);	
	sonuc = sqrt(sayi);
	printf("sonuc:(%f)",sonuc);
	
	
	return 0;
}
