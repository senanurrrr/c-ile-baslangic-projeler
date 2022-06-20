#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{

/*	int kenar,cevre;
	float alan;
	kenar=5;
	cevre=kenar*3;
	alan=(sqrt(3)/4)*(pow(kenar,2)); //pow:fonksiyondur üs ifadesi katar.5 üssü 2.sqrt:fonksiyondur deðerin karekökünü hesaplar.
	printf("eskenar ucgenin kenari: %d\n",kenar);
	printf("eskenar ucgenin cevresi: %d\n",cevre);
	printf("eskenar ucgenin alani: %f",alan);
*/	
	
/*
	int not1,not2,not3,proje,ort;
	not1=50;
	not2=60;
	not3=70;
	proje=80;
	ort=(not1+not2+not3+proje)/4;
	
	printf("birinci not= %d\n",not1);
	printf("ikinci not= %d\n",not2);
	printf("ucuncu not= %d\n",not3);
	printf("proje= %d\n",proje);
	printf("Ortalama= %d",ort);
*/

    	
	int bagaji,eli,bagaj,el,fark,fiyat,toplam;
	
	printf("Bagaji giriniz= ");
	scanf("%d",&bagaji);
	
	printf("el bagaji giriniz=");
	scanf("%d",&eli);
	
	bagaj=15;
	el=8;
	fiyat=5;
	fark=((bagaji-bagaj)+(eli-el));
	toplam=fark*fiyat;
	
	printf("\nbagaj fazlaniz= %d Kg\n",fark);
	printf("Toplam fiyat farki= %d TL",toplam);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
