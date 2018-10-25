#include <stdio.h>
#include <conio.h>

main()
{
	int sayi1, sayi2, sayi3, sayi4, sayi5, enbuyuk;
	
	printf("1. sayiyi giriniz \n");
	scanf("%d", &sayi1);
	printf("2. sayiyi giriniz \n");
	scanf("%d", &sayi2);
	printf("3. sayiyi giriniz \n");
	scanf("%d", &sayi3);
	printf("4. sayiyi giriniz \n");
	scanf("%d", &sayi4);
	printf("5. sayiyi giriniz \n");
	scanf("%d", &sayi5);
	
	enbuyuk = sayi1;
	if(sayi2 > enbuyuk)
		enbuyuk = sayi2;
	if(sayi3 > enbuyuk)
		enbuyuk = sayi3;
	if(sayi4 > enbuyuk)
		enbuyuk = sayi4;
	if(sayi5 > enbuyuk)
		enbuyuk = sayi5;
						
	printf("En buyuk sayi %d", enbuyuk);
}
