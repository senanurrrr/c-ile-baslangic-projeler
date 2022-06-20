#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


    struct kayit
	{
    	char ad[20];
    	int no;
    	int sinif;
    	float ort;
	};
    struct kayit ogr; 
int main() 
{

	printf("Adiniz: ");
	scanf("%s",&ogr.ad);
    printf("Numaraniz: ");
	scanf("%d",&ogr.no);
	printf("Sinifiniz: ");
	scanf("%d",&ogr.sinif);
	printf("Ortalama: ");
	scanf("%.2f",&ogr.ort);	
	return 0;
}
