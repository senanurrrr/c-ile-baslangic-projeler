#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	//while
/*
	int i;
	i=1;
	while(i<=5)//i 5e ve 5ten k���k say�lara e�itse
	{
		printf("Merhaba karadeniz");
	}
*/	

   
        //2 �erli say�lar 14 olmadan
    	int i;
    	i=1;
    	while(i<=20)
    	{
    		if(i%2==0 && i!=14)
    		{
    			printf("%d\n",i);
			}
			i++;
		}
    	
			

	
	return 0;
}
