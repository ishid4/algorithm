#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
	srand(time(NULL));
	int dizi[5], enbuyuk = 0, sayac = 0;
	
	while(sayac < 5){
		int sayi = 100 + rand()%800;
			if(sayi > enbuyuk){
				enbuyuk = sayi;
				dizi[sayac] = sayi;
				sayac++;
			}
	}
	for(int i=0;i<5;i++){
			printf("%d\n", dizi[i]);
	}
}
