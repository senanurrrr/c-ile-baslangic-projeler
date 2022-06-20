#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int topla(int v1,int v2)
{
	return(v1+v2);
}
int main() 
{
	int v1,v2;
	printf("Birinci ve ikinci sayiyi giriniz:  ");
	scanf("%d %d",&v1,&v2);
	printf("TOPLAM: %d",topla(v1,v2));
	return 0;
}
