#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
	srand(time(NULL));
	int dizi[9];
	
	for(int i=0;i<9;i++)
		dizi[i] = 10 + rand()%150;
		
	for(int i=0;i<9;i++){
		if(dizi[i] > 100 && dizi[i]%2 == 0)
			printf("%d\n", dizi[i]);
	}
}
