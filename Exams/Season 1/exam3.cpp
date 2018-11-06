#include <stdio.h> 
#include <stdlib.h>

main(){
	int son=3,bosluk=12;
	
	for(int i=0;i<3;i++){
		for(int j=1;j<=son;j++)
			printf("%d", j);
		
		for(int k=0;k<bosluk;k++)
			printf(" ");
			
		for(int l=son;l>0;l--)
			printf("%d", l);
			
		printf("\n");
		bosluk-=6, son+=3;
	}
	son=7, bosluk=6;
	for(int m=0;m<3;m++){
		for(int n=0;n<bosluk;n++)
			printf(" ");
		
		for(int o=son;o<=9;o++)
			printf("%d", o);
			
		for(int p=9;p>=son;p--)
			printf("%d", p);
			
		printf("\n");
		son-=3, bosluk-=3;
	}
}





/*
123            321
123456      654321
123456789987654321
      789987
   456789987654
123456789987654321
*/
