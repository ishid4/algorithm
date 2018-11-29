#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main(){
	int sayi[8][8], say = 8, toplam = 0, rndm[8], gecici=0;
	srand(time(NULL));
	for(int i=0;i<8;i++)
		rndm[i] = 25 + rand()% 475; 
	
	for(int ab=0;ab<2;ab++){
		if(ab==1){
			for(int i=0;i<8;i++){    
	        for(int j=i;j<8;j++){
	            if(rndm[j]<rndm[i])
				{
					gecici = rndm[i];
					rndm[i] = rndm[j];
					rndm[j] = gecici;
				}
	        }
	    	} 
		}
		                                     
		for(int i=7;i>=0;i--){                                     
			for(int j=0;j<8;j++){     
				if(j == i){
					sayi[i][j] = rndm[i];
				}	 
				else
					sayi[i][j] = 25 + rand()% 475;
				printf("%4d", sayi[i][j]);
			}
		printf("\n\n");                         
		} 
		printf("\n\n");
	}                                 
}
/*
ters köþegen þeklinde küçükten büyüðe random 25 ile 500 arasýnda sayý yazýlacak
*/
