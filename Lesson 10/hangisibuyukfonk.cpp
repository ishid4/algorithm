#include <stdio.h>

void goster(int a, int b);
main(){
	int x, y;
	printf("sayi gir: ");
	scanf("%d, &x");
	printf("sayi gir: ");
	scanf("%d, &y");
	goster(x, y);
}
void goster(int a, int b){
	if(a > b)
		printf("Ilk girilen sayi ikinci girilen sayidan buyuktur");
	else
		printf("Ikinci girilen sayi ilk girilen sayidan buyuktur");
}
