#include<stdio.h>
#include<stdlib.h>
int main()
{   
    int mat[7][7];
    
    for(int i=1;i<6;i++)
    { 
		printf("\n");      
        for(int j=0;j<5;j++){
            printf(" %d",mat[i][j] = i + j);
        }
    }
    printf("\n");
    for(int i=1;i<6;i++)
    { 
		printf("\n");      
        for(int j=0;j<5;j++){
            printf(" %d",mat[i][j] = i * j);
        }
    }
}
