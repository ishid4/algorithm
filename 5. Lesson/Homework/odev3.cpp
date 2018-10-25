#include <stdio.h>
#include <conio.h>

main(){
	int son=7, bosluk=1, deger=0;
	for(int i=0; i<6; i++){
		for(int k=son; k>0; k--)
		printf("%d", k);
		
		for(int j=0; j<bosluk; j++)
		printf(" ");
		
		for(int l=3; l<=son+2; l++)
		printf("%d", l+deger);
		
		printf("\n");
		son--, deger++, bosluk+=2; 
	}
}
