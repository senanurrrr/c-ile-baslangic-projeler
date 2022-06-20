#include <stdio.h>
#include <stdlib.h>
#define sayi1 20  //5.HAFTA 1.UYGULAMA
#define sayi2 4
#define topla(x,y)    x+y
#define cikart(x,y)  (x)-(y)
#define carp(x,y)    (x*y)
#define bol(x,y)     (x)/(y)
#define yazdir(t,c,ca,b) printf("Toplam: %d, Farki : %d, Carpma : %d, Bolumu : %d\n",t,c,ca,b);
int main(int argc, char *argv[]) 
{
system("color fc");
int x,y; int t,c,ca,b;
x=sayi1;  y=sayi2;
t=topla(x,y);
c=cikart(x,y);
ca=carp(x,y);
b=bol(x,y);
yazdir(t,c,ca,b);
getch();
}
