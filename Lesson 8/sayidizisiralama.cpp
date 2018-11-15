#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
	srand(time(NULL));
	int dizi[10], sayi, enbuyuk = 0, sayac=0;
	
	for(int i=0;i<10;i++){
		sayi = 100 + rand()%800;
		if(sayi>enbuyuk){
			enbuyuk=sayi;
			dizi[sayac] = sayi;
			sayac++;
		}
	}
	
	for(int i=0;i<5;i++){
			printf("%d\n", dizi[i]);
	}
}
