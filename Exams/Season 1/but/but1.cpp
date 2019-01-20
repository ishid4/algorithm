#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int matris[15][15], toplam2;

int toplam(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			toplam2 += matris[i][j];
		}
	}
}

int yaz(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d", matris[i][j]);
		}
		printf("\n");
	}
}

main(){
	int toplam3;
		
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("Matris sayisi giriniz: ");
			scanf("%d", &matris[i][j]);
			if(j > 0){
				toplam3 += matris[i][j];
				
				if(toplam3 < matris[i][j]){
					printf("Hatali giris");
					return 0;
				}
			}
			
		}
	}
	
	yaz();
	toplam2 = toplam();
	printf("\n%d", toplam2);
}
