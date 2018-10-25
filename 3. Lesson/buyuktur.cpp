#include <stdio.h>
#include <conio.h>

main()
{
	int sayi1, sayi2, sayi3, sayi4, sayi5;
	
	printf("1. sayiyi giriniz \n");
	scanf("%s", &sayi1);
	printf("2. sayiyi giriniz \n");
	scanf("%s", &sayi2);
	printf("3. sayiyi giriniz \n");
	scanf("%s", &sayi3);
	printf("4. sayiyi giriniz \n");
	scanf("%s", &sayi4);
	printf("5. sayiyi giriniz \n");
	scanf("%s", &sayi5);
	
	if(sayi1 > sayi2 && sayi1 >= sayi3 && sayi1 > sayi4 && sayi1 > sayi5){
		printf("1. sayi hepsinden buyuk");
	}
	else{
		if(sayi2 > sayi1 && sayi2 > sayi3 && sayi2 > sayi4 && sayi2 > sayi5){
			printf("2. sayi hepsinden buyuk");
		}
		else{
			if(sayi3 > sayi1 && sayi3 > sayi2 && sayi3 > sayi4 && sayi3 > sayi5){
				printf("3. sayi hepsinden buyuk");
			}
			else{
				if(sayi4 > sayi1 && sayi4 > sayi2 && sayi4 > sayi3 && sayi4 > sayi5){
					printf("4. sayi hepsinden buyuk");
				}
				else{
					if(sayi5 > sayi1 && sayi5 > sayi2 && sayi5 > sayi3 && sayi5 > sayi4){
						printf("5. sayi hepsinden buyuk");
					}
					else{
					
					}
				}
			}
		}
	}
	
}
