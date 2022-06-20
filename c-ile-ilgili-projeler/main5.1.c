#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
/*
	printf("*****MAAS ZAM HESABI*****");
	printf("\n\n");
	float maas,yenimaas;
	printf("Maasinizi giriniz: ");
	scanf("%f",&maas);
	yenimaas=maas+maas*12/100;
	printf("Yeni maasiniz: %f",yenimaas);

*/
	//çemberde alan: pi * r * r
	//cemberde cevre: 2 * pi *r
    
	float yaricap,pi,alan,cevre;
	pi=3.14;
	printf("CEMBERDE ALAN VE CEVRE HESABI");
	printf("\n");
	printf("Yaricap degerini giriniz: ");
	scanf("%f",&yaricap);
	
	alan=pi*yaricap*yaricap;
	cevre=2*pi*yaricap;
	
	printf("Cemberin alani: %f\n",alan);
	printf("Cemberin cevresi: %f",cevre);	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
