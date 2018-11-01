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
	int sayac=1;
	for (int i=0;i<strlen(cumle);i++){
		printf("%c", cumle[i]);
		if(cumle[i] == ' '){
				printf("\n");
				sayac++;
		}
	}
	
	printf("\nGirilen cumlede %d adet kelime vardir", sayac);
}
