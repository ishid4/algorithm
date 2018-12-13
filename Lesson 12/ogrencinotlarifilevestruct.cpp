#include <stdio.h>
#include <string.h>

struct notlar{
	char dersadi[20], dersadi2[20];
	int notu, notu2, ortalama;
};

struct geneldurum{
	char gecti_kaldi[20];
};

struct ogrenciler{
	char adsoyad[20];
	int sinif, numara;	
	struct notlar nbilgiler;
	struct geneldurum gbilgiler;
}ogrenci[3];

main(){
	FILE *ogrencinotlar;
	ogrencinotlar = fopen("ogrenci_bilgileri.txt","w");
	
	for(int i=0;i<2;i++){
		printf("Ogrenci isim: ");
		scanf("%s", &ogrenci[i].adsoyad);
		
		printf("Ogrencinin sinifi: ");
		scanf("%d", &ogrenci[i].sinif);
		
		printf("Ogrencinin numarasi: ");
		scanf("%d", &ogrenci[i].numara);
		
		printf("Ogrencinin ders adi: ");
		scanf("%s", &ogrenci[i].nbilgiler.dersadi);
		
		printf("Ogrencinin ders notu: ");
		scanf("%d", &ogrenci[i].nbilgiler.notu);
		
		printf("Ogrencinin ders adi: ");
		scanf("%s", &ogrenci[i].nbilgiler.dersadi2);
		
		printf("Ogrencinin ders notu: ");
		scanf("%d", &ogrenci[i].nbilgiler.notu2);
		
		ogrenci[i].nbilgiler.ortalama = (ogrenci[i].nbilgiler.notu + ogrenci[i].nbilgiler.notu2) / 2;
		if((ogrenci[i].nbilgiler.notu + ogrenci[i].nbilgiler.notu2) / 2 >= 45)
			strcpy(ogrenci[i].gbilgiler.gecti_kaldi, "GECTI");
		else
			strcpy(ogrenci[i].gbilgiler.gecti_kaldi, "KALDI");
			
		fprintf(ogrencinotlar, "%s\t%d\t%s\n", ogrenci[i].adsoyad, ogrenci[i].nbilgiler.ortalama, ogrenci[i].gbilgiler.gecti_kaldi);
		printf("\n---------------------------------------\n");
	}
	/*for(int i=0;i<3;i++){
		printf("Ogrenci isim: %s\n", ogrenci[i].adsoyad);
		printf("Ogrencinin sinifi: %d \n", ogrenci[i].sinif);
		printf("Ogrencinin numarasi: %d \n", ogrenci[i].numara);
		printf("Ogrencinin ders adi ve notu: %s %d \n", ogrenci[i].nbilgiler.dersadi, ogrenci[i].nbilgiler.notu);
		printf("Ogrencinin ders adi ve notu: %s %d \n", ogrenci[i].nbilgiler.dersadi2, ogrenci[i].nbilgiler.notu2);
		printf("Ogrencinin durumu: %s \n", ogrenci[i].gbilgiler.gecti_kaldi);
	}*/
	fclose(ogrencinotlar);
}
