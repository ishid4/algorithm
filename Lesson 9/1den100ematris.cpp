#include <stdio.h>
#include <stdlib.h>

main(){
	int sayi[10][10], s = 1;
	                                               
	for(int i=0;i<10;i++){                                     
		for(int j=0;j<10;j++)                            
			printf("%4d", sayi[i][j] = s++);                                    
	printf("\n");                         
	}                                    
}
