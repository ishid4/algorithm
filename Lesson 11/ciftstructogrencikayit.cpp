#include <stdio.h>

struct dogum_tarihi{
	int gun,ay,yil;
};

struct sahis_bilgileri{
	char ad[20];
	int boy;
	int sinif;
	struct dogum_tarihi tarih;
}kisi[3];

main(){
	for(int i=0;i<3;i++){
		printf("Ogrenci isim: ");
		scanf("%s", &kisi[i].ad);
		
		printf("Ogrenci Boy: ");
		scanf("%d", &kisi[i].boy);
		
		printf("***** DOGUM TARIHI *****\n");
		
		printf("Dogum tarihi gun: ");
		scanf("%d", &kisi[i].tarih.gun);
		printf("Dogum tarihi ay: ");
		scanf("%d", &kisi[i].tarih.ay);
		printf("Dogum tarihi yil: ");
		scanf("%d", &kisi[i].tarih.yil);
		
		printf("\n---------------------------------------\n");
	}
	
	for(int i=0;i<3;i++){
		printf("Ogrenicinin adi: %s \n", kisi[i].ad);
		printf("Ogrenicinin boyu: %d \n", kisi[i].boy);
		printf("Ogrenicinin Dogum Tarihi: %d-%d-%d \n---\n", kisi[i].tarih.gun, kisi[i].tarih.ay, kisi[i].tarih.yil);
	}
}
