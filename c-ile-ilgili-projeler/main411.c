#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//proceduere kullan�m� 
//1. kendi ba��na i�lem yapan 
//2. de�er al�p, i�lem yapan proceduere
//4. HAFTA 1. UYGULAMA D�KD�RTGEN ALANI HESAPLAMA
void dikdortgen_alan(int a, int b)
{
int alan=a*b;
printf("Dikdortgenin Alan� : %d",alan);
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
