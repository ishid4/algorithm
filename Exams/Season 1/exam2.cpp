#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
int main(){
	
	int uzunluk, yarisi;
	char kelime[100];
	
	for(int i=0;i<3;i++){
		
		printf("\nKelime giriniz: ");
		gets(kelime);
		uzunluk = strlen(kelime);
		yarisi = strlen(kelime)/2;
		
		if(uzunluk%2 == 0){
			for(int j=0;j<uzunluk;j++){
				if(j==yarisi){
						printf("%d%c", uzunluk, kelime[j]);
				}
				else{
					printf("%c", kelime[j]);
				}
			}
		}
	}
}
