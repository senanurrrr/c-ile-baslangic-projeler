#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	double derece,ssin,scos;
	printf("Dereceyi giriniz: ");
	scanf("%lf",&derece);
	ssin=sin(derece);
	printf("sinus: %lf \n",ssin);
	scos=cos(derece);
	printf("cosinus: %lf",scos);	
	
	
	return 0;
}
