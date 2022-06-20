#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
	char sehir[15],sehir2[15],sehir3[15];
   int i;
   
   for(i=0;i<3;i++)
   {
   	switch(i)
   	{
   	case 0:	printf("Sehri Girin: ");
   	            scanf("%s",&sehir); break;
   	case 1: printf("Sehri Girin: ");
   	            scanf("%s",&sehir2); break;
   	case 2: printf("Sehri Girin: ");
   	            scanf("%s",&sehir3); break;
	}
   }
   printf("Sehir 1: %s\n", sehir);
   printf("Sehir 2: %s\n",sehir2);
   printf("Sehir 3: %s",sehir3);
	
	
	
	return 0;
}
