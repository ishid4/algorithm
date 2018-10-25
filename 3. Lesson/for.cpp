#include <stdio.h>
#include <conio.h>

main()
{
	char harf;
	
	printf("harf giriniz. \n");
	scanf("%c", &harf);
	
	for(int i=0;i<10;i++){
		printf("%c\n", harf);
	}
	
}
