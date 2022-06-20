#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	//fibonacci serisinin ilk 20 elemaný
	int a,b,c,i;
	a=1;
	b=1;
	
	printf("%d\n",a);
	printf("%d\n",b);
	
	for(i=1;i<=18;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
	
	
	
	return 0;
}
