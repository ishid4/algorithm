#include <stdio.h>
#include <conio.h>

main()
{
	char harf;
	
	printf("Harf giriniz. \n");
	scanf("%c", &harf);
	
	switch(harf){
		case 'a':
			printf("a harfi girildi.");
		    break;
		case 'b':
			printf("b harfi girildi.");
		    break;
		default:
			printf("a yada b harfleri girilmedi.");
			break;
	}
	
}
