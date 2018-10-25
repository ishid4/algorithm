#include <stdio.h>
#include <conio.h>
#include <time.h> 
#include <stdlib.h>

main(){
	int sayi = 0, toplam = 0;
	do{
		printf("Sayi giriniz ");
		scanf("%d", &sayi);
		toplam+=sayi;
	}
	while(sayi != 0);
		
	printf("%d sayilarin toplami", toplam);
}
