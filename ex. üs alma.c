#include<stdio.h>
#include<stdlib.h>

int pow(int a,int b);

int main(){
	int sayi1,sayi2;
	printf("iki sayi giriniz:");
	scanf("%d\n%d",&sayi1,&sayi2);
	printf("%d",pow(sayi1,sayi2));
	
	
	
	
}



int pow(int taban,int us){
	int i;
	int	sonuc=1;
	for(i=1;i<=us;i++){
		sonuc=sonuc*taban;
	
	}
	return sonuc;
}
