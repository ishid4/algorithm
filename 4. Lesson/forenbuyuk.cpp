#include <stdio.h>
#include <conio.h>

main()
{
	int sayi, enbuyuk = 0, kacinci;
	
	for(int i=1;i<6;i++){
		printf("%d. Sayi giriniz:", i);
		scanf("%d",&sayi);
		
		if(sayi > enbuyuk){
			kacinci = i;
			enbuyuk = sayi;
		}
	}
	
	printf("%d en buyuk sayi. %d. sayi", enbuyuk, kacinci);
}

