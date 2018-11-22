#include <stdio.h>
#include <stdlib.h>

int main(){   
    int sayi[5], gecici = 0;
    for(int i=0;i<5;i++){       
        printf("%d. indeksli sayi giriniz: ", i);
		scanf("%d", &sayi[i]);
    }
    for(int i=0;i<4;i++){       
        for(int j=i+1;j<5;j++){
            if(sayi[j]<sayi[i])
			{
				gecici = sayi[i];
				sayi[i] = sayi[j];
				sayi[j] = gecici;
			}
        }
    }
    for(int i=0;i<5;i++)
		printf("\n%d",sayi[i]);
}
