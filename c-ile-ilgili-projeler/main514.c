#include <stdio.h>
#include <stdlib.h>
//5.HAFTA 4.UYGULAMA
int main(int argc, char *argv[]) {
char metin[100]; int i=0; char sonuc;
system("cls");
printf("Herhangi bir metin giriniz : "); gets(metin);
while (metin[i])
{
sonuc=metin[i];
putchar(toupper(sonuc));
i++;
}
getch();
}
