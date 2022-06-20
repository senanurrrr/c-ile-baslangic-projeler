#include <stdio.h>
#include <stdlib.h>
//struct yapýsý
//4.HAFTA 5.UYGULAMA
struct ogr
{
	char ADI[20]; char SOYADI[20]; int yas;
}bilgiler;
int main(int argc, char *argv[]) {
printf("Ogrencinin adi nedir : "); scanf("%s",&bilgiler.ADI);
printf("Ogrencinin soyadi nedir : "); scanf("%s",&bilgiler.SOYADI);
printf("Ogrencinin yasi nedir : "); scanf("%d",&bilgiler.yas);
printf("Ogrencimiz %s %s %d yasindadir.\n",bilgiler.ADI,bilgiler.SOYADI,bilgiler.yas); scanf("%s",&bilgiler.ADI);
getch();
}
