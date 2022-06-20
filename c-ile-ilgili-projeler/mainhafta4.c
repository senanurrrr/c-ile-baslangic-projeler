#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void topla(int a ,int b)
{
	printf("Sayilarin toplami : %d\n",a+b);
}
void cikar(int a ,int b)
{
	printf("Sayilarin farki : %d\n",a-b);
}
void carp(int a ,int b)
{
	printf("Sayilarin carpimi : %d\n",a*b);
}
void bol(float a ,float b)
{
	printf("Sayilarin bolumu : %.2f\n",a/b);
}
int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL,"Turkish"); system ("color fc");
	int a,b;
	printf("birinci sayi nedir: "); 
	scanf("%d",&a);
    printf("ikinci sayi nedir: "); 
	scanf("%d",&b);
    topla(a,b); cikar(a,b); carp(a,b); bol(a,b);
	getch();
}
