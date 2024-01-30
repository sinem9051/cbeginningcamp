#include<stdio.h>
#include<stdlib.h>

int main(){
	
	/*SAYI DIZILERI
	-Tek Boyutlu sayi dizileri
	-karakter dizileri
	-iki boyutlu sayi dizileri
	
	short dizi[10]
	dizinin ismi dizi
	dizinin boyutu 10
	eleman tipi short
	
	short 2 byte yer tutar.
	short[10] hafizada 20 bytelik yer tutar.
	
	dizinin ilk elemanini basitrmak icin dizi[0]*/
	
	int sinem[5]={7,4,8,7,9};
	
	printf("%d\n",sinem[0]);
	
	printf("%d\n",sinem[4]);
	
	
	//ilk 10 cift elemani ekrana yazdiralim.
	
	int zeynep[10];
	int i;
	
	for(i=0;i<10;i++){
		zeynep[i]=2*i;
		printf("%d\n",zeynep[i]);
	}
	
	//dizide var olan bir degeri degistirebiliriz. 
	
	
	sinem[1]=45;
	
	
	printf("%d\n",sinem[1]);
	
	for(i=0;i<5;i++){
		printf("%d\t\n",sinem[i]);
	}
	
	//Kullanicidan uc sayi isteyerek dizi olusturma
	
	int dizi[3];
	
	for (i=0;i<3;i++){
		scanf("\n%d",&dizi[i]);
	}
		for (i=0;i<3;i++){
		printf("%d",dizi[i]);
	}
	
	
	return 0;
	
	
	
}

