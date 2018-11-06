#include <stdio.h> 
   
int main( ){ 
    int X,Y, ciftTop=0, kac=0; 
   
    printf("Sayi Gir: "); 
	scanf("%d",&X); 
   
    while(X) 
    { 
        Y=X%10; 
        X=X/10; 
        if(Y%2==0){ 
            printf("%d", Y);
            ciftTop+=Y;
			kac++; 
        } 
    } 
   
    printf("\nCift sayilarin toplami: %d", ciftTop);
    printf("\nCift sayilarin ortalamasi: %d", ciftTop/kac);
}
