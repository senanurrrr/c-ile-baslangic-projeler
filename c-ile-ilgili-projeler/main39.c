#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	//struct kullanýmý  
    struct kitapbilgi
    {
    	char kitapadi[20];
    	char yazari[20];
    	int fiyat;
    	float puani;
	};

int main() 
{	
    struct kitapbilgi kb={"hasret","Canan Tan",40,8.75};
    printf("kitap adi: %s\n",kb.kitapadi);
	printf("kitap yazari: %s\n",kb.yazari);
	printf("kitap fiyati: %d\n",kb.fiyat);
	printf("kitap puani: %.2f",kb.puani);
	return 0;
}
