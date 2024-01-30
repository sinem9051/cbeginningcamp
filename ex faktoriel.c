#include <stdio.h>
#include <stdlib.h>


int factorial(int x);



int main(){
	int sayi;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	printf("%d",factorial(sayi));

	
}




factorial(int x){
	int factorial=1,i;
	for(i=1;i<=x;i++){
		factorial=factorial*i;
	}

	return factorial;
	
	
}
