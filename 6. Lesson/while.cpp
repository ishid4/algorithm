#include <stdio.h>
#include <conio.h>
#include <time.h> 
#include <stdlib.h>

main(){
	int sayi, sayac = 1, tekadet, ciftadet;
	srand (time(NULL));
	
	while(sayac <= 100){
		int r = rand() % 100 + 1;
			if(sayi%2 == 0)
				ciftadet++;
			else
				tekadet++;
		sayac++;
	}
	printf("cift adet: %d\n", ciftadet);
	printf("tek adet: %d\n", tekadet);
}
