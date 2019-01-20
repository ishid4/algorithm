#include <stdio.h>
#include <stdlib.h>

struct yol{
	int kara_yolu_sayisi;
};

struct istatistik{
	int insan_sayisi;
};

struct ulke{
	char ulke_adi[5];
	
	struct sehir{
		char sehir_adi[10];
		struct istatistik veri3;
		struct yol veri4;
	}veri2[10];
	
}veri[5];

main(){
	int enbuyuk = 0, sayi, enbuyuk2 = 0, sayi2, p1, p2, pp1, pp2;
	FILE *dosya;
	dosya = fopen("dosya.txt","w");
	
	for(int i=0;i<1;i++){
		printf("Ulke adi giriniz: ");
		scanf("%s", &veri[i].ulke_adi);
		fprintf(dosya, "\n%s\n---------\n", veri[i].ulke_adi);
		
		fputs("Sehir\tNufus\tYol Sayisi\n", dosya);
		
		for(int j=0;j<2;j++){
			printf("Sehir adi giriniz: ");
			scanf("%s", &veri[i].veri2[j].sehir_adi);
			fprintf(dosya, "%s\t", veri[i].veri2[j].sehir_adi);
			
			printf("Insan sayisi giriniz: ");
			scanf("%d", &veri[i].veri2[j].veri3.insan_sayisi);
			fprintf(dosya, "%d\t", veri[i].veri2[j].veri3.insan_sayisi);
			
			printf("Kara yolu sayisi giriniz: ");
			scanf("%d", &veri[i].veri2[j].veri4.kara_yolu_sayisi);
			fprintf(dosya, "%d\t", veri[i].veri2[j].veri4.kara_yolu_sayisi);
			
			fputs("\n", dosya);
		}
	}
	fclose(dosya);
	
	for(int i=0;i<1;i++){
		for(int j=0;j<2;j++){
			sayi = veri[i].veri2[j].veri3.insan_sayisi;
			if(enbuyuk < sayi)
				enbuyuk = sayi, p1 = i, p2 = j;
			
			sayi2 = veri[i].veri2[j].veri4.kara_yolu_sayisi;	
			if(enbuyuk2 < sayi2)
				enbuyuk2 = sayi2, pp1 = i, pp2 = j;
			
		}
	}
	printf("\n%d\t%d\n", enbuyuk, enbuyuk2);
	printf("\nEn fazla kara yolu olan %s ulkesinin %s sehri. Kara yolu sayisi ise %d", veri[pp1].ulke_adi, veri[pp1].veri2[pp2].sehir_adi, enbuyuk2);
	printf("\nEn fazla nufusu olan %s ulkesinin %s sehri. Nufus sayisi ise %d", veri[p1].ulke_adi, veri[p1].veri2[p2].sehir_adi, enbuyuk);
	
	
	
}
