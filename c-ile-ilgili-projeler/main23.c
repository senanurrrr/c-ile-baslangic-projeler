#include <stdio.h>
#include <stdlib.h>

int main() 
{
	
   int i,j,k,l;

    for (i=0;i<5;i++)   // basamak
    {
        for (j=0;j<=i;j++)   // satýr
        {
            printf("*");
        }

        for (k=8;k>=i*2;k--)
        {
            printf(" ");
        }

        for (l=0;l<=i;l++)
        {
            printf("*");
        }
        printf("\n");
    }
   
     for (i=0;i<5;i++)   // basamak
    {
        for (j=5;j>i;j--)   // satýr
        {
            printf("*");
        }

        for (k=0;k<=i*2;k++)
        {
            printf(" ");
        }

        for (l=5;l>i;l--)
        {
            printf("*");
        }
        printf("\n");
    }

	
	
	return 0;
}
