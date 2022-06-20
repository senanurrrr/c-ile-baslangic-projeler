#include <stdio.h>
#include <stdlib.h>
//4.HAFTA 4.UYGULAMA 
fahrenheit(int sicaklik)
{
	float fah;
	fah=32+sicaklik*9/5;
	return fah;
}
int main(int argc, char *argv[]) 
{
int sicaklik;
printf("Sicaklik degeri giriniz: "); scanf("%d",&sicaklik);
printf("Sicaklik degerinin Fahrenheit karsiligi : %d\n",fahrenheit(sicaklik));
getch();
}
