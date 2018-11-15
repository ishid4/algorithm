#include <stdio.h>
#include <stdlib.h>

main(){
	int sayi[10];
	for(int i=0; i<10; i++)
		sayi[i] = i + 10;
		
	for(int i=0; i<10; i++)
		printf("%d. indeks elemanin degeri = %d \n", i, sayi[i]);
}
