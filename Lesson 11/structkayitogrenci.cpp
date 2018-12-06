#include <stdio.h>
#include <stdlib.h>

struct kayit{
	char ad[30];
	int no;
	int sinif;
};

main(){
	struct kayit ogrenci;
	
	printf("Ogrenci Nosu: ");
	scanf("%d",&ogrenci.no);
		
	printf("Ogrenci Adi:");
	scanf("%s", ogrenci.ad);
	
	printf("Ogrenci Sinifi:");
	scanf("%d",&ogrenci.sinif);
	
	printf("\n*** Girilen Bilgiler ***");
	printf("\nNo: %d", ogrenci.no);
	printf("\nAdi: %s", ogrenci.ad);
	printf("\nSinifi: %d", ogrenci.sinif);
}
