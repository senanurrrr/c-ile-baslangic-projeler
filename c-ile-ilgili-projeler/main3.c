#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) 
{
git:
system("CLS");system("color fc");
char secim;
setlocale(LC_ALL,"Turkish");
puts("\t\t  YAPILACAK OLAN �SLEMLER    ");
puts("-------------------------------------------------------------------------------------");
puts("\t\t[A] - GENEL M��TER� B�LG� G�R���");
puts("\t\t[B] - B�LG� G�R��LER�N� G�R�NT�LE");
puts("\t\t[C] - S�STEMDEN �IKI�");
puts("-------------------------------------------------------------------------------------");
puts("\t\t SE��M�N�Z NED�R:    ");   scanf("%c",&secim);
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
printf("HATALI SE��M L�TFEN BEKLEY�N�Z...");	
getchar();sleep(1,5);goto git;
}	
	
	
	
	
	
	
	getch();
}
