#include <stdio.h>

main(){
	FILE *ogrencinotlar;
	char ad[10];
	int notu, nosu, enbuyuk = 0;
	
	ogrencinotlar = fopen("ogrencilernotlar.txt","r");
	
	while(!feof(ogrencinotlar)){
		fscanf(ogrencinotlar, "%d\t%s\t%d\n", &nosu, &ad, &notu);
		if(enbuyuk < notu)
			enbuyuk = notu;
	}
	printf("En yuksek not: %d\n", enbuyuk);
	fclose(ogrencinotlar);
}
