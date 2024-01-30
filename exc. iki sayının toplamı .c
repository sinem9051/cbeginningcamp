#include<stdio.h>
#include<stdlib.h>


int toplam(int x, int y){
	return x+y;
}


int main(){
	int number1, number2;
	printf("iki sayi giriniz");
	scanf("%d\n%d",&number1,&number2);
	printf("%d",toplam(number1,number2));
	
}
