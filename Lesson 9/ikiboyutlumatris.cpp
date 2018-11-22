#include <stdio.h>
#include <stdlib.h>

main(){
	int sayi[3][4];
	
	printf("Sayi matrisinin elemanlarini giriniz: \n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)                    
		{                                         
		printf("sayi (%d,%d)=", i, j);           
		scanf("%d", &sayi[i][j]);                   
		}                                     
	}                                                
	for(int i=0;i<3;i++)                      
	{                                     
		for(int j=0;j<4;j++)         
		{                                  
			printf("%d\t", sayi[i][j]);           
		}                                     
	printf("\n");                         
	}                                    
}                                        




