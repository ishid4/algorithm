#include <stdio.h>
#include <conio.h>

main()
{
	int adet = 8, bosluk = 1;
	for(int  i=0; i<adet; i++){
		for(int j=0; j<adet; j++)
		printf(" ");
		
		for(int k=0; k<bosluk; k++)
		printf("*");
		
		printf("\n");
		adet--;
		bosluk+=2;
	}
}
