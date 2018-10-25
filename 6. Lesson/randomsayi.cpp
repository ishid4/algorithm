#include <stdio.h>
#include <conio.h>
#include <time.h> 
#include <stdlib.h>

main(){
	int sayi;
	srand (time(NULL));
  	int r = 5 + rand() % 295;//5 ile 295 arasýnda 295 dahil deðil.
  	printf("%d\n", r);
}
