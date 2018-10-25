#include <stdio.h>
#include <conio.h>
#include <time.h> 
#include <stdlib.h>

main(){
	int sayi, toplam;
	srand (time(NULL));
	
	for(int i=0;i<10;i++){
		int r = rand() % 100;
		printf("%d\n", r);
		toplam+=r;
	}
	toplam/=10;
	printf("\n%d sayilarin ortalamasi", toplam);	
}
