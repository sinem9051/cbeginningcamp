#include<stdlib.h>
#include<stdio.h>

void yerdegistir(int *a1,int *a2){
  int gecici;
  gecici=*a1;
  *a1=*a2;
  *a2=gecici;
}





int main()
{
	//Farkli data typelari(char int float double) icin degisken tanimlayip deger atamasi yapiniz
	//bu atadiginiz degerleri ve bellekteki tuttuklari adresleri bastiriniz.
	
	
	
	char s='s' ;
	int sinem=108;
	float abdullah=13.45;
	double baran=397509350340580348534;
	
	//printf("Degerim %c bellekte tuttugu adres %d\n",a,&a);
	printf("Degerim %d bellekte tuttugu adres %d\n",sinem,&sinem);
	printf("Degerim %f bellekte tuttugu adres %d\n",abdullah,&abdullah);
	printf("Degerim %lf bellekte tuttugu adres %d\n",baran,&baran);
	
	// iki sayiyi pointer ile toplama
	
	int sayi1,sayi2,toplam;
	int *ptr1,*ptr2;
	ptr1=&sayi1;
	ptr2=&sayi2;
	
	printf("Lutfen iki sayi giriniz\n");
	scanf("%d%d",ptr1,ptr2);
	
	toplam= *ptr1 + *ptr2;
	printf("Toplam is %d",toplam);
	
	// Pointer ile iki sayinin yeri degistirip onceki ve sonraki durumu yazdirmak
	
	int sayi4=15 ,sayi5=45;
	printf("enter two number\n");
	
	
	printf("degistirmeden once %d %d\n",sayi4,sayi5);
	printf("degistirmeden once %d %d\n",&sayi4,&sayi5);
	yerdegistir(&sayi4,&sayi5);
	printf("degistirdikten sonra %d %d\n",sayi4,sayi5);
	printf("degistirdikten sonra %d %d\n",&sayi4,&sayi5);
	
	
	// pointer kullanarak dizinin elemanlarini alma ve konsola bastirma;
	
	int diziBoyutu;
	int dizi[100];
	int i;
	int *ptrr;
	
	ptrr=dizi;
	
	printf("Kac elemanli bir dizi istiyorsunuz");
	scanf("%d",&diziBoyutu);
	
	for(i=0;i<diziBoyutu;i++)
	{
	 printf("%d numarali elemani giriniz",i);
	 scanf("%d",&dizi[i]);	
		
	}
	
	for(i=0;i<diziBoyutu;i++)
	{
		printf("%d",*ptrr);
		ptrr++;
	}
	
	
/* Kullanıcıdan dizi eleman sayısını belirlemesini isteyin dizinin elemanlarını girdikten sonra
pointer yardımıyla yeni bir diziye ilk dizinin elemanlarını kopyalayıp her iki diziyi birden console a bastırınız
 */



int main()
{
    int source_arr[100];
    int dest_arr[100];
    int N;
    int *source_ptr;
    int *dest_ptr;
    int *end_ptr;
    source_ptr=source_arr;
    dest_ptr=dest_arr;



    printf("Dizi kac elemanli olsun\n");
    scanf("%d",&N);

    printf("Lutfen elemanlari giriniz\n");
    for( i=0;i<N;i++)
    {
        scanf("%d",(source_ptr+i));

    }

    end_ptr=&source_arr[N-1];

    printf("Kaynak arrayim kopyalamadan once");
    bastir(source_arr,N);


    while(source_ptr <=end_ptr)
    {
        *dest_ptr = *source_ptr;
        source_ptr++;
        dest_ptr++;
    }

    printf("\nKopyalandiktan sonraki source arrayim : \n");
    bastir(source_arr,N);

    printf("\nKopyalandiktan sonraki destination arrayim : \n");
    bastir(dest_arr,N);

    return 0;
}

void bastir(int *arr , int N)
{
     printf("Degerlerim:\n");
    for(i=0;i<N;i++)
    {
        printf("%d ",*arr);
        arr++;
    }
	
	
}
}
