#include <stdio.h>
#include <conio.h>

main()
{
	int adet = 9, bosluk = 2;
	for(int i=0; i<11; i++){
		if(i>5){
			adet+= 4;
			bosluk-= 2;
		}
		for(int l=0; l<bosluk; l++)
		printf(" ");
		
		for(int j=0; j<adet; j++)
		printf("*");
		
		for(int k=0; k<bosluk; k++)
		printf(" ");
		
		if(i!=4){
			printf("\n");
		}
		adet-= 2;
		bosluk++;g
	}
}
