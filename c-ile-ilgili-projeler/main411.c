#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//proceduere kullanýmý 
//1. kendi baþýna iþlem yapan 
//2. deðer alýp, iþlem yapan proceduere
//4. HAFTA 1. UYGULAMA DÝKDÖRTGEN ALANI HESAPLAMA
void dikdortgen_alan(int a, int b)
{
int alan=a*b;
printf("Dikdortgenin Alaný : %d",alan);
}
int main(int argc, char *argv[]) 
{
int a,b;
setlocale(LC_ALL,"Turkish");
system("color fc");
puts("sayi1 nedir: "); scanf("%d",&a);
puts("sayi2 nedir: "); scanf("%d",&b);
dikdortgen_alan(a,b); 
	
getch();
}
