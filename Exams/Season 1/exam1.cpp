#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
int main(){
	
	int y,sayac,sayi;
	srand(time(NULL));
	
	for(int i=0;i<15;i++){
		sayi = 99 + rand()%900;
		
		printf("%d\n", sayi);
		while(sayi){
			y=sayi%10;
			sayi=sayi/10;
			
			if(y == 3){
				sayac++;
			}
		}
	}
	printf("\n%d Adet 3 sayisi vardir.", sayac);
}
