#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	//ceil floor kullanýmý
	//sayýyý klavyeden girip yuvarlamaya yarýyor.
	
	double sayi,sonuc1,sonuc2;
	printf("degeri giriniz: ");
	scanf("%lf",&sayi);
	sonuc1 = floor(sayi);
	printf("sonuc: %.f",sonuc1);
	printf("\n");
	sonuc2 = ceil(sayi);
	printf("sonuc: %.f",sonuc2);
	
	
	
	
	
	return 0;
}
