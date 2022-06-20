#include <stdio.h>
#include <stdlib.h>


int main() 
{
	//strcpy ve strncpy 
/*	
	char kaynak[30]="merhaba dunya";
	char kopya[30]=" ";
	
	strcpy(kopya,kaynak);
	printf("%s",kopya);
	
*/	
	
	
	
	char nereden[30]="merhaba antalya";
	char nereye[30]="";
	
	strncpy(nereye,nereden,9);
	printf("%s",nereye);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
