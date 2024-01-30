#include<stdio.h>
#include<stdlib.h>




void fibonacci(int x){

int i,first=0,second=1,next;
	
	for(i=0;i<x;i++){
	if(i<=1){
		next=i;
		printf("%d*\t",i);
	}
	else{
		next=first+second;
		first=second;
		second=next;
		printf("%d\t",next);
		}
	}
}

int main(){
	int n;

	printf("Kac terimli olmasini istersiniz");
	scanf("%d",&n);
	fibonacci(n);
	
}
