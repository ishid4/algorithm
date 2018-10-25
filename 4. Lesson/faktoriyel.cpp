#include <stdio.h>
#include <conio.h>

main()
{
	int sayi, sonuc = 1;
	
	printf("Sayi giriniz: ");
	scanf("%d",&sayi);
	
	for(int i=sayi;i>=1;i--){
		sonuc = sonuc * i;
	}
	
	printf("%d! = %d ", sayi, sonuc);
}

