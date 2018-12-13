#include <stdio.h>

main(){
	FILE *ogrencinotlar;
	char ad[10];
	int notu, nosu;
	
	ogrencinotlar = fopen("ogrencilernotlar.txt","r");
	
	while(!feof(ogrencinotlar)){
		fscanf(ogrencinotlar, "%d\t%s\t%d\n", &nosu, &ad, &notu);
		printf("%d\t%s\t%d\n", nosu, ad, notu);
	}
	fclose(ogrencinotlar);
}
