#include <stdio.h>
#include <conio.h>

main()
{
	int asal=0, sayi1, sayi2, kacasal = 0;
	
	printf("Ilk sayi araligini giriniz: ");
	scanf("%d", &sayi1);
	
	printf("Ikinci sayi araligi giriniz: ");
	scanf("%d", &sayi2);
	
	for(int a=sayi1;a<sayi2;a++){ 
		asal=0;
		for(int i=2;i<a;i++){
			if(a % i == 0){
				asal++;
			}	
		}
		if(asal == 0){
			kacasal++;
			printf("%d \n", a);
		}
	}
	printf("--------- \n");
	printf("%d tane asal sayi var.", kacasal);

}

