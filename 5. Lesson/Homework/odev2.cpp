#include <stdio.h>
#include <conio.h>

main(){
	int son=5, bosluk=1;
	for(int i=0; i<5; i++){
		for(int j=0; j<bosluk; j++)
		printf(" ");
			
		for(int k=son; k>0; k--)
		printf("%d", k);
		
		for(int l=1; l<=son; l++)
		printf("%d", l);
		
		printf("\n");
		son--, bosluk++;
	}
}
