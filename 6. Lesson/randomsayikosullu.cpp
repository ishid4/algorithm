#include <stdio.h>
#include <conio.h>
#include <time.h> 
#include <stdlib.h>

main(){
	int sayi;
	srand (time(NULL));
	
	for(int i=0;i<35;i++){
		int r = 47 + rand() % 323;//5 ile 295 arasýnda 295 dahil deðil.
		if(r>99 && r<185){
			if(r%2 == 0){
				printf("%d\n", r);
			}
		}
	}
}
