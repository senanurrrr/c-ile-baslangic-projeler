#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	//logaritma alma
	
	double sayi,sonuc;
	printf("sayiyi giriniz: ");
	scanf("%lf",&sayi);
	sonuc=log10(sayi);
	printf("sonuc: %.lf",sonuc);
	
	
	return 0;
}
