#include <stdio.h>
#include <conio.h>

main()
{
	int sayi, asal=0;
	
	printf("Sayi giriniz: ");
	scanf("%d",&sayi);
	
	for(int i=2;i<sayi;i++){
		if(sayi % i == 0){
			asal++;
		}
	}
	
	if(asal == 0) printf("Sayi asal"); else printf("Sayi asal degil.");

}

