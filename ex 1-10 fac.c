#include <stdio.h>
#include <stdlib.h>


int factorial(int x);



int main(){
	int j;
	for(j=1;j<=10;j++){
	printf("%d\t",factorial(j));
	
		
	}
	
	
}




factorial(int x){
	int factorial=1,i;
	for(i=1;i<=x;i++){
		factorial=factorial*i;
	}

	return factorial;
	
}	

