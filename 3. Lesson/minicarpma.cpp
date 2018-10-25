#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
	int sayi1, sayi2, toplam, menu;
	
	printf("Sayi giriniz. \n");
	scanf("%d", &sayi1);
	printf("Sayi giriniz. \n");
	scanf("%d", &sayi2);
	printf("*** Menu *** \n");
	printf("[1] Toplama \n");
	printf("[2] Cikarma \n");
	printf("[3] Carpma \n");
	printf("[4] Bolme \n");
	printf("Seciminiz : ");
	scanf("%d", &menu);
	
	switch(menu){
		case 1:
			toplam = sayi1 + sayi2;
			printf("Toplama sonucu = %d", toplam);
		    break;
		case 2:
			toplam = sayi1 - sayi2;
			printf("Cikarma sonucu = %d", toplam);
		    break;
		case 3:
			toplam = sayi1 * sayi2;
			printf("Carpma sonucu = %d", toplam);
		    break;
		case 4:
			toplam = sayi1 / sayi2;
			printf("Bolme sonucu = %d", toplam);
		    break;
		default:
			printf("1 ile 4 arasinda sayi girilmedi.");
			break;
	}
	
}
