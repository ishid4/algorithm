#include <stdio.h>
#include <conio.h>

main(){
	int son=7, bosluk=1, say=0;
	for(int  i=say; i<4; i++){
		say++;
		for(int k=0; k<bosluk; k++)
		printf(" ");
		
		for(int j=say; j<=son; j++)
		printf("%d", j);
		
		printf("\n");
		son--, bosluk++;
	}
	son=7, bosluk=1, say=0;
	for(int o=say; o<4; o++){
		say++;
		for(int k=0; k<bosluk; k++)
		printf(" ");
			
		for(int m=son; m>=say; m--)
		printf("%d", m);
		
		printf("\n");
		son--, bosluk++;
	}
}
