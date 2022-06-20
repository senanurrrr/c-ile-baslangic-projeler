#include <stdio.h>
#include <stdlib.h>
//4.HAFTA 6.UYGULAMA CARPIM TABLOSU
int main(int argc, char *argv[]) 
{
git:
system("CLS");
int sayi,i;
printf("sayi nedir: "); scanf("%d",&sayi);
if (sayi<0)
{
	printf("Girilen sayi negatif olamaz ! ! !");
	getch(); goto git;
}
if(sayi>10)
{
	printf("Girilen sayi 10 dan buyuk olamaz ! ! !");
	getch(); goto git;
}
for (i=1; i<=10; i++)
{
	printf("%d x %d = %d\n",sayi,i,sayi * i);
}
getch();
}
