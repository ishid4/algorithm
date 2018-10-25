#include <stdio.h>
#include <conio.h>
#include <time.h> 
#include <stdlib.h>

main(){
	int sayi, deneme=1;
	srand (time(NULL));
  	int r = rand() % 100;
  	printf("Admin menu : %d\n", r);
  	
	bas:
		printf("Sayi giriniz ");
		scanf("%d", &sayi);
		
		if(sayi == r){
			printf("%d. denemede bildiniz!!", deneme);
		}
		else if(sayi < r){
			printf("Sayiyi buyultun.\n");deneme++;goto bas;
		}
		else{
			printf("Sayiyi kucultun.\n");deneme++;goto bas;
		}
}
