#include <stdio.h>

void tektoplam(), cifttoplam();
main(){
	tektoplam();
	cifttoplam();
}
void tektoplam(){
	int tektop = 0;
	for(int i=50;i<=150;i++){
		 if(i % 2 == 1)
		 tektop += i;
	}
	printf("Teklerin toplami : %d\n", tektop);
}
void cifttoplam(){
	int cifttop = 0;
	for(int i=50;i<=150;i++){
		if(i % 2 == 0)
		cifttop += i;
	}
	printf("Ciftlerin toplami : %d\n", cifttop);
	
}
