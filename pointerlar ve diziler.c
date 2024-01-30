#include<stdio.h>
#include<stdlib.h>


// her dizi bir pointerdýr ve her pointer da bir dizidir.

int main(){
	char can[100]="canan";
	char *p1;
	
	p1=can;
	//p1=&c[0] oldu. Yani c[0] adresi su an p1 e esit oldu. O halde *p cagirmam halinde c[0] a ulasirim.
	
	prinf("%d",p1);
	prinf("%c",*p1);
	printf("5. karakterim %c dir.\n", can[4]);
	
// |c|a|n|a|n|
	
	// *(p1+4) cagirirsam c[4] degerine ulasirim.
	
	prinf("%c",*(p1+4));
}


