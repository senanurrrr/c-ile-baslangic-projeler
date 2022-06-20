#include <stdio.h>
#include <stdlib.h>
#define fibonanci(fibo,i) fibo[0]=1; fibo[1]=1; for(i=2; i<=9;i++){fibo[i]=fibo[i-1]+fibo[i-2];} for (i=0;i<=9;i++){printf("%d\n",fibo[i]);}
//5.HAFTA 3.UYGULAMA
int main(int argc, char *argv[]) 
{
system("cls");
int fibo[10]; int i;
fibonanci(fibo,i);
getch();
}
