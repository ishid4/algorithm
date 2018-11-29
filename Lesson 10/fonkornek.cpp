#include <stdio.h>

void bilgi();
main(){
	bilgi();
	int x=0,y=0;
	printf("Sayi gir: ");
	scanf("%d, &x");
	printf("Sayi gir: ");
	scanf("%d, &y");
}
void bilgi(){
	printf("Klavyeden iki adet sayi girmeniz gerekmekte !!! \n");
}
