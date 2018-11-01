#include <conio.h>
#include <string.h>
#include <stdio.h>

main(){
	char cumle[100];
	printf("Bir cumle giriniz: ");
	gets(cumle);
	if(strlen(cumle)>100){
		printf("Cok uzun cumle girdiniz!.");
		return 0;
	}
	int sayac=0;
	for (int i=0;i<strlen(cumle);i++){
		if(cumle[i]=='a' || cumle[i]=='A'){
			sayac++;
		}
	}
	
	printf("\nGirilen cumlede %d adet a hafi vardir", sayac);
}
