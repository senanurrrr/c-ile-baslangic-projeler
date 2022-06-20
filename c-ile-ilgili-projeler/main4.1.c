#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int misir,kola,su,bilet,toplam;
	
	printf("Misir adedi: ");
	scanf("%d",&misir);
	
	printf("Kola adedi: ");
	scanf("%d",&kola);
	
	printf("Su adedi: ");
	scanf("%d",&su);
	
	printf("Bilet adedi: ");
	scanf("%d",&bilet);
	
	toplam=kola*2+su*1+bilet*8+misir*2;
	printf("Toplam: %d",toplam);
	printf("TL...");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
