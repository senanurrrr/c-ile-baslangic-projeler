#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
	float turkce,matematik,fen,sosyal,taban,toplampuan;
	
	taban=100.160;
	 
	printf("Turkce netiniz:  ");
	scanf("%f",&turkce);
	
	printf("Matematik netiniz:  ");
	scanf("%f",&matematik);	
	
	printf("Fen netiniz:  ");
	scanf("%f",&fen);	
	
	printf("Sosyal netiniz:  ");
	scanf("%f",&sosyal);	
	
	toplampuan=turkce*1.999+matematik*3.998+sosyal*1 +fen*2.999+taban; 
	printf("Toplam puan: %f",toplampuan);
	
	return 0;
}
