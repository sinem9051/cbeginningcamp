#include<stdio.h>
#include<stdlib.h>


void fibonacci(int number){
	int i,first=0,second=1,next;
	
	for(i=1;i<=number;i++){
		if(i<=1){
			next=i;
		}
		else{
		next=first+second;
		first=second;
		second=next;
	}
		printf("%d\t",next);
	}
	

	
	
}


int main(){
	int number;
	printf("kac adet fibonacci elde etmek istersiniz:");
	scanf("%d",&number);
	fibonacci(number);
}

