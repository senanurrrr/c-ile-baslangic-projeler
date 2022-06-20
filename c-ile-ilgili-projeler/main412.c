#include <stdio.h>
#include <stdlib.h>
//4.HAFTA 2.UYGULAMA--
void topla(int a,int b)
{
printf("Sayilarin toplami: %d\n",a+b);
}
void fark(int a,int b)
{
printf("Sayilarin farki: %d\n",a-b);
}
void carp(int a,int b)
{
printf("Sayilarin carpimi: %d\n",a*b);
}
void bol(float a,float b)
{
printf("Sayilarin bolumu: %.2f\n",a/b);
}

int main(int argc, char *argv[]) 
{
int a,b;
printf("Birinci sayi nedir: "); scanf("%d",&a);
printf("Ikinci sayi nedir: "); scanf("%d",&b);
printf("********************************\n");
topla(a,b); fark(a,b); carp(a,b); bol(a,b);
getch();
}
