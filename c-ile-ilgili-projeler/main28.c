#include <stdio.h>
#include <stdlib.h>
#include <fenv.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	//taban ve us kontrolü
	//pow fonkisyonu kullanýmý
	int x,y;
	int sonuc;
	printf("taban: ");
	scanf("%d",&x);
	
	printf("us: ");
	scanf("%d",&y);
	
	sonuc=pow(x,y);
	printf("Sonuc: %d",sonuc);
	
	
	
	
	
	
	return 0;
}
