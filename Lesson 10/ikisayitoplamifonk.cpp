#include <stdio.h>

int topla(int a, int b);
main()
{
	int sayitoplam = 0;
	sayitoplam = topla(21,43);
	printf("iki sayinin toplami: %d", sayitoplam);
}
int topla(int a,int b)
{
	int toplam = a + b;
	return toplam;
}
