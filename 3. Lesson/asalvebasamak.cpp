#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>

main(){
	
	start:
	int sayi, asal = 0, basamaksayisi= 0;
	
	printf("Sayi giriniz : ");
	scanf("%d",&sayi);
	
	for(int i=2;i<sayi;i++){
		if(sayi % i == 0){
			asal++;
		}
	}
	
	if(asal == 0) printf("Sayi asal \n"); else printf("Sayi asal degl \n");
	
	while(sayi>0){
		basamaksayisi++;
		sayi/=10;
	}
	
	
	printf("basamak sayisi : %d \n", basamaksayisi);
	system("pause");
	
	goto start;
}
