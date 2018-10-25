#include <stdio.h>
#include <conio.h>
#include <time.h> 
#include <stdlib.h>

main(){
	int sayi;
	srand (time(NULL));
  	int r = rand() % 100;
  	printf("Admin menu : %d\n", r);
  	
	for(int i=2;i>=0;i--){
		printf("Sayi giriniz ");
		scanf("%d", &sayi);
		
		if(sayi == r){
			printf("\n Tebrikler bildiniz!!");
			break;
		}
		else if(sayi < r){
			printf("Sayiyi buyultun.\n");
			if(i!=0)
				printf("%d hakkiniz kaldi!! \n" , i);
			else
				printf("Hakkiniz kalmadi");
		}
		else{
			printf("Sayiyi kucultun.\n");
			printf("%d hakkiniz kaldi!! \n", i);
		}
	}
}
