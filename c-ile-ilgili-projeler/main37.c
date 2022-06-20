#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
	char kitapad[30],kitapyazar[30],yazar[30];
	
	printf("Kitap adi ve yazari giriniz: ");
	scanf("%s%s",kitapad,yazar);
	
	
	strcat(kitapyazar,kitapad);
	strcat(kitapyazar,"");
	strcat(kitapyazar,"<-->");
	strcat(kitapyazar,yazar);
	printf("\n\n");
	printf("%s",kitapyazar);
	
	return 0;
}
