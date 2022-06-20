#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*void dortgen(int kisa,int uzun)
{
	int i,j;
	for(i=0;i<uzun;i++)
	{
		for(j=0;j<kisa;j++)
		{
			printf("*");
		}
	        printf("\n");
	}	
}
int main() 
{
	dortgen(5,6);
	
	return 0;
}
*/
void dortgen(int boy,int en)
{
	int i,j;
	printf("\n");
	for(i=1;i<=boy;i++)
	{
		printf(" ");
		for(j=1;j<=en;j++)
		{
			if(j==1 || j==en || i==1 || i==boy)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

int main() {
	
	//Bir fonksiyonla Uzunluklarý klavyeden alýnmýþ içi boþ dörtgeni yýldýzlarla çizme
	
	int boy,en;
	printf(" Boy : ");
	scanf("%d",&boy);
	printf(" En : ");
	scanf("%d",&en);
	dortgen(boy,en);
	
	getch();
}
