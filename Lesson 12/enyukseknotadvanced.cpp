#include <stdio.h>
#include <string.h>

main(){
	FILE *ogrencinotlar;
	char ad[10], ad2[10];
	int notu, nosu, enbuyuk = 0, enkucuk = 101, toplam;
	
	ogrencinotlar = fopen("ogrencilernotlar.txt","r");
	
	while(!feof(ogrencinotlar)){
		fscanf(ogrencinotlar, "%d\t%s\t%d\n", &nosu, &ad, &notu);
		toplam += notu;
		if(enbuyuk < notu)
			enbuyuk = notu, strcpy(ad2, ad);
		if(notu < enkucuk)
			enkucuk = notu;
	}
	printf("En yuksek notu alan kisi %s %d aldi.\n", ad2, enbuyuk);
	printf("Not ortalamasi: %d\n", toplam/nosu);
	printf("En kucuk not: %d\n", enkucuk);
	fclose(ogrencinotlar);
}
