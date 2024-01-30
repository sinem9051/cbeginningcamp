#include<stdio.h>
#include<stdlib.h>


int dortislem(int number1, int number2, char islem)
{
	
	if(islem=='+')
	{
		return number1+number2;
	}	
	
	else if(islem=='-')
	{
		return number1-number2;
	}	
	
	else if(islem=='*')
	{
		return number1*number2;
	}	
	
	else if(islem=='/')
	{
		return number1/number2;
	}
	
	else{
		printf("hatali istek");
	}	
		
}





int main(){
	/* Klavyeden girilen iki tam sayinin toplamini, farkini, carpimini ve 
	bolumunu gerceklestiren c programini fonksiyon kullanmadan ve 
	fonsiyon kullanarak yaziniz. */
	
	
	int number1,number2;
	char islem;
	
	printf("hangi islemi yapmak istersiniz(+,-,*,/)\n");
	scanf("%c",&islem);
	
	printf("enter two number:\n");
	scanf("%d\n%d",&number1,&number2);
	
	
	printf("islemin sonucu %.2d",dortislem(number1,number2,islem));
	
	
}







//GLOBAL VE LOCAL DEGISKENLER
//
