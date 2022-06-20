#include <stdio.h>
#include <stdlib.h>
#define faktoryel(sayi) fakt=1; for(i=1;i<=sayi;i++){fakt*=i;}printf("sonuc : %d\n",fakt);
//5. HAFTA 2. UYGULAMA
int main(int argc, char *argv[]) {
git:
system("color fc");
int sayi;  int i,fakt;
printf("Sayi nedir: "); scanf("%d",&sayi);
if(sayi <2 || sayi >10)
{
printf("Girilen sayi 2-10 arasinda olmalidir!");
getch(); goto git;
}
else
{
	faktoryel(sayi);
}
getch();
}
