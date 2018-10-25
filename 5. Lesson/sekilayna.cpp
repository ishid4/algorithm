#include <stdio.h>
#include <conio.h>

main()
{
	int adet = 1, bosluk = 17;
	for(int  i=0; i<5; i++){
		for(int j=0; j<adet; j++)
		printf("*");
		
		for(int k=0; k<bosluk; k++)
		printf(" ");
		
		for(int l=0; l<adet; l++)
		printf("*");
		
		printf("\n");
		bosluk-= 4;
		adet+= 2;
	}
}
