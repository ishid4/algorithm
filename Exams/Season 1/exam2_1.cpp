#include <conio.h>
#include <string.h>
#include <stdio.h>

main(){
	char cumle[100];
	
	printf("Bir cumle giriniz: ");
	gets(cumle);
	
	int enuzun=0, uzun=0, sayac=0, en_sayac=0;
	for (int i=0;i<strlen(cumle);i++){
		if(uzun > enuzun){
			enuzun = uzun;
			sayac++;
			en_sayac = sayac;
			
		}
		uzun++;
		
		if(cumle[i] == ' '){
			uzun=0;
		}
	}
	
	printf("\nEn uzun kelime %d", enuzun);
}
