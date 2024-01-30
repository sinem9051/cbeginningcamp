#include<stdio.h>
#include<stdlib.h>


int buyuksayi(int x,int y){
	if(x>y){
	return 0;
	}
	else if(y>x){
	return 1;
	}
	else{
		return 2;
	}
	

}



int main(){
	
	int sayi1,sayi2,sonuc;
	printf("iki sayi giriniz");
	scanf("%d%d",&sayi1,&sayi2);
	sonuc=buyuksayi(sayi1,sayi2);
	if(sonuc==0){
		printf("sayi1 daha buyuk");
	}
	else if(sonuc==1){
		printf("sayi2 daha buyuk");
	}
	else{
		printf("esitler");
	}
}
