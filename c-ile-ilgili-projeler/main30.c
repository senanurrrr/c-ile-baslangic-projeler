#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	//mutlak deðerrr=fabs
	double sayi,sonuc;
	printf("Degeri giriniz: ");
	scanf("%lf",&sayi);
	sonuc=fabs(sayi);
	printf("sonuc: %.lf",sonuc);
	
	return 0;
}
