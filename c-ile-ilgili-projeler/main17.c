#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
/*
	int sayi;
	printf("Lutfen ay numarasini giriniz: ");
	scanf("%d",&sayi);
	
	switch(sayi)
	{
		case 1:printf("OCAK"); break;
        case 2:printf("SUBAT"); break;
        case 3:printf("MART"); break;
        case 4:printf("NISAN"); break;
        case 5:printf("MAYIS"); break;
        case 6:printf("HAZIRAN"); break;
        case 7:printf("TEMMUZ"); break;
        case 8:printf("AGUSTOS"); break;
        case 9:printf("EYLUL"); break;
        case 10:printf("EKIM"); break;
        case 11:printf("KASIM"); break;
        case 12:printf("ARALIK"); break;
	}
*/
	


    //haftanýn günleri
    int gun;
    printf("Bir sayi giriniz: ");
    scanf("%d",&gun);
    switch(gun)
    {
    	case 1:printf("PAZARTESI"); break;
    	case 2:printf("SALI"); break;
    	case 3:printf("CARSAMBA"); break;
    	case 4:printf("PERSEMBE"); break;
    	case 5:printf("CUMA"); break;
    	case 6:printf("CUMARTESI"); break;
    	case 7:printf("PAZAR"); break;
    	default: printf("HATALI GIRIS");
    }



    return 0;
}
