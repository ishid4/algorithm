#include <stdio.h>
#include <stdlib.h>
main(){
	int sayi[10][10], s = 1, toplam = 0;                                        
	for(int i=0;i<10;i++){                                     
		for(int j=0;j<10;j++){                         
			printf("%4d", sayi[i][j] = s++);
			if(i == j)
				toplam += sayi[i][j];
			if(j == i)
				toplam += sayi[i][j];  
		}
	printf("\n\n");                         
	}
	printf("%d", toplam);                                    
}
