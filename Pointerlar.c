  //pointerlar
  
// her deðerin tutulduðu bir adres vardýr. Adres tutan deðiþkenlere pointer denir.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int can=10;
	int *p;
	
	
	p=&can;
	
	printf("%d\n",*p);
	printf("%d\n",p);
	printf("%d\n",&can);
	printf("%d\n",can);
	
	
	int *sayi;
	int n;
	n=20;
	
	sayi=&n;
	
	
	printf("%d\n",*sayi);
	printf("%d\n",sayi);
	printf("%d\n",&n);
	printf("%d\n",n);
	
	*sayi=30;
	
	printf("%d\n",n);
	printf("%d\n",&n);
	
	
//POINTERLARDA ISLEMLER

	int *ad1,*ad2,*ad;
	int number=10,p2=20;
	

	ad1=&number;
	ad2=&p2;
	
	*ad1=*ad2+2;
	
	printf("%d\n",*ad1);
	printf("%d\n",ad1);
	
	
	
//POINTERLARDA DEGISKENIN ADRESIYLE FONKSIYON CAGIRMA

void degistir(int *adr1,int *adr2)
{
	int gecici;
	gecici=*adr1;
	*adr1=*adr2;
	*adr2=gecici;
	
	
}



	int s=10,d=20;
	printf("CAGIRMADAN ONCE %d %d\n",s,d);
	degistir(&s,&d);
	printf("CAGIRDIKTAN SONRA %d %d\n",s,d);
	
	
	return 0;






















	
	
	
	
	
	
}
