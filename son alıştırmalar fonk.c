#include<stdio.h>
#include<stdlib.h>



int main(){
	int number,c=0,i;
	printf("Bir sayi giriniz:");
	scanf("%d",&number);
	
	for(i=0;i<=number;i++){
		if(number%i==0){
		c++;
		}	
	}
	if(c==2){
		printf("%d",number);
	}
	
	
}
