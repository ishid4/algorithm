#include <stdio.h>
#include <conio.h>
#include <time.h> 
#include <stdlib.h>

main(){
	int sayi, ilksayi;
	srand (time(NULL));
	
	for(int i=1;i<101;i++){
		int r = 100 + rand() % 200;//5 ile 295 arasýnda 295 dahil deðil.
		printf("%d . %d\n", i , r);
		if(i==1){
			ilksayi=r;
		}
		else if(ilksayi==r){
			printf("Ilk sayi %d . sayida tekrarladi\n", i);
		}
				
	}
	return 0;
}
