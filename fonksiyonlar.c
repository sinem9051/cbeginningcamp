#include<stdio.h>
#include<stdlib.h>

//geriye deger dondurmeyen fonksiyonLar bu sekilde
void tekmiciftmi(int x);



int main(){
	
	int sayi;
	printf("enter a number:");
	scanf("%d",&sayi);
	tekmiciftmi(sayi);
}
	
void tekmiciftmi(int x)
{
	
	if(x%2==0)
	{
		printf("even\n");
	}
	else
	{
		printf("odd\n");
	}		
	
}




	
	
	


