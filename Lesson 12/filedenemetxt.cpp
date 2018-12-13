#include <stdio.h>

main(){
	FILE *yaz;
	int x, y;
	yaz = fopen("deneme.txt","w");
	
	printf("1. sayiyi gir: ");
	scanf("%d", &x);
	printf("2. sayiyi gir: ");
	scanf("%d", &y);
	
	fputs("iki sayinin toplami !!!\n", yaz);
	fprintf(yaz, "%d + %d = %d\n", x, y, x+y);
	fclose(yaz);
	
	printf("Bilgiler kaydedildi.");
}
