#include<stdio.h>

int ortalamafonk();
main(){
	int ortalama = 0;
	ortalama = ortalamafonk();
	printf("sayilarin ortalamasi: %d", ortalama);
}
int ortalamafonk(){
	int toplam = 0, ortalamasi = 0;
	for(int i=1;i<=100;i++)
	    toplam += i;
	  
	ortalamasi = toplam / 100;
	return ortalamasi;
}
