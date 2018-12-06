#include <stdio.h>

struct kayitlar{
	char ad[20];
	int yas;
	int notu;
}ogrenciler[5];

main(){
	for(int i=1;i<6;i++){
		printf("%d. ogrencinin bilgileri\n",i);
		
		printf("Ogrenci Ismi: ");
		scanf("%s",&ogrenciler[i].ad);
		
		printf("Ogrenci Yasi: ");
		scanf("%d",&ogrenciler[i].yas);
		
		printf("Ogrenci Notu: ");
		scanf("%d",&ogrenciler[i].notu);
		
		printf("\n---------------------------------------\n");
	}
	
	for(int i=1;i<6;i++){
		printf("%d. Ogrenici %s, %d yasindadir ve %d notunu almistir. \n", i, ogrenciler[i].ad, ogrenciler[i].yas, ogrenciler[i].notu);
	}
}
