#include <stdio.h>
#include <conio.h>
#include <time.h> 
#include <stdlib.h>

main(){
	int sayi, deneme=1;
	srand (time(NULL));
  	int r = rand() % 100;
  	printf("Admin menu : %d\n", r);
	
	do{
		printf("Sayi giriniz ");
		scanf("%d", &sayi);
		if(sayi < r){
			printf("Sayiyi buyultun.\n");
		}
		else if(sayi > r){
			printf("Sayiyi kucultun.\n");
		}
		deneme++;
	}
  	while(sayi != r);
  	
  	printf("\nTebrikler %d. denemede bildiniz!!", deneme);
}
