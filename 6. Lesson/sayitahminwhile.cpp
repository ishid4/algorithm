#include <stdio.h>
#include <conio.h>
#include <time.h> 
#include <stdlib.h>

main(){
	int sayi, hak = 3;
	srand (time(NULL));
  	int r = rand() % 100;
  	printf("Admin menu : %d\n", r);

  	while(hak>=0){
  		printf("Sayi giriniz ");
		scanf("%d", &sayi);
		
		if(sayi == r){
			printf("\n Tebrikler bildiniz!!");
		}
		else if(sayi < r){
			printf("Sayiyi buyultun.\n");
			printf("%d hakkiniz kaldi!! \n" , hak);hak--;
				
		}
		else{
			printf("Sayiyi kucultun.\n");
			printf("%d hakkiniz kaldi!! \n", hak);hak--;
		}
	}
  		printf("Hakkiniz kalmadi");
}
