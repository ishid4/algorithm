#include <stdio.h>
#include <conio.h>

main(){
	int son = 5;
	for(int  i=0; i<5; i++){
		for(int j=1; j<son; j++)
		printf("%d", j);
		
		printf("\n");
		son--;
	}
}
