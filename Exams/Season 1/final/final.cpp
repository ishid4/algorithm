#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int rastgele(){
	int rndm = rand()%900 + 99;
	
	if(rndm % 2 == 0)
		return rndm;
	else
		rastgele();
}

struct satirlar{
	int satir[8][9];
};

struct matrisler{
	int matris;
	struct satirlar abilgi;
}matris_adi[5];

main(){
	int rndm, ortalama, toplam=0, sayi;
	srand(time(NULL));
	
	FILE *sonuc;
	sonuc = fopen("sinav.txt","w");
	
	for(int i=0;i<5;i++){
		for(int j=0;j<8;j++){
			for(int k=0;k<9;k++){
				rndm = rastgele();
				matris_adi[i].abilgi.satir[j][k] = rndm;
				
				printf("%d\t", matris_adi[i].abilgi.satir[j][k]);
				fprintf(sonuc, "%d\t", matris_adi[i].abilgi.satir[j][k]);
			}
			printf("\n");
			fputs("\n", sonuc);
		}
		fputs("\n\n", sonuc);
		printf("\n\n");
	}
	fclose(sonuc);
	sonuc = fopen("sinav.txt","r");
	
	while(!feof(sonuc)){
		fscanf(sonuc, "%d\t", &sayi);
		toplam += sayi;
	}
	toplam/=72;
	printf("%d", toplam);
	
	fclose(sonuc);
}
