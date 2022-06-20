#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) 
{
git:
system("CLS");system("color fc");
char secim;
setlocale(LC_ALL,"Turkish");
puts("\t\t  YAPILACAK OLAN ÝSLEMLER    ");
puts("-------------------------------------------------------------------------------------");
puts("\t\t[A] - GENEL MÜÞTERÝ BÝLGÝ GÝRÝÞÝ");
puts("\t\t[B] - BÝLGÝ GÝRÝÞLERÝNÝ GÖRÜNTÜLE");
puts("\t\t[C] - SÝSTEMDEN ÇIKIÞ");
puts("-------------------------------------------------------------------------------------");
puts("\t\t SEÇÝMÝNÝZ NEDÝR:    ");   scanf("%c",&secim);
secim=toupper(secim);
if(secim=='A')
{
printf("A TIKLANDI");	

goto git;
}
else if(secim=='B')
{
printf("B TIKLANDI");
getchar();getch();
goto git;	
}
else if(secim=='C')
{
printf("C TIKLANDI");	
}	
else
{
printf("HATALI SEÇÝM LÜTFEN BEKLEYÝNÝZ...");	
getchar();sleep(1,5);goto git;
}	
	
	
	
	
	
	
	getch();
}
