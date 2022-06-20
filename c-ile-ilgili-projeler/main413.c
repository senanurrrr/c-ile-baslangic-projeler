#include <stdio.h>
#include <stdlib.h>
//kaç tane sayý girildin þeklinde soru sorulacak
//girilen sayý kadar deðer klavyeden alýndýktan sonra
//girilen sayýlarýn ortalamasýný yazdýrýnýz? 
//4.HAFTA 3. UYGULAMA--
int main(int argc, char *argv[]) {
int kactane;  int sayilar[999]; int i,toplama,ortalama;

printf("Kac tane sayi girilsin: "); scanf("%d",&kactane);
for(i=1;i<=kactane;i++)
{
printf("Lutfen %d . sayiyi giriniz :",i);
scanf("%d",&sayilar[i]);
toplama +=sayilar[i];
}
ortalama=toplama/kactane;
printf("Toplamlari : %d\n",toplama);
printf("Ortalamasi : %d\n",ortalama);
getch();
}
