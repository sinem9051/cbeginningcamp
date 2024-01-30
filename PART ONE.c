#include <stdio.h>
#include <stdlib.h>

int main()//ilk olarak main fonksiyonunun icindeki kod algilanir.
{
	
	printf("hello dear sinem\n");
	printf("I am learning c programming\n");//onceki satirda \n kullandigim icin alt alta yazdirdi.
	
	printf("hello dear sinem");// n olmadigi icin alt satiri bunun yanina yazacak.
	printf("I am learning c programming\n");
	
	printf("hello dear sinem\nI am learning c programming\n");//istersek direkt bu sekilde alt satira gecip digerini yazdirabiliriz.
	
	printf("merhaba gencler\\Naber\n");//bu sekilde koyarsak \ isareti yazdirir.
	
	// ile yorum satirini her satira tek tek yazdirabiliiriz.
	// /* ile baslayip  * /ile bitirilerek de yorum yazdirilabilir.
	
	
	

	
	
	int sayi;
	sayi=15;
	printf("%d\n",sayi);
	
	int sayi2=8;
	printf("%d",sayi2);
	
	//integer icin deger tanimlarken yukaridaki gibi iki yol kullanilir.
	
	
	int sayi3,sayi4;
	sayi3=78;
	sayi4=45;
	
	printf("%d\n%d\n",sayi3,sayi4);
	//iki tane deger tanimlayip ekrana yazdirmak istedigimizde bu sekilde yapariz.
	//aralarina n koymazsam bitisik yazdirir. bosluk koyarak yan yana ayri da yazdirabiliriz.
	
	int sayi5=16;
	int sayi6=85;
	printf("%d %d",sayi5,sayi6);
	
	int sayi7=16,sayi8=85;
	printf("%d %d\n",sayi5,sayi6);
	
	
	float number=5.65;
	printf("%f\n",number);
	
	float number2=4.65;
	printf("%.2f\n",number);// noktadan sonra kac hane gostermek istersem f'in onune nokta ile birlikte yaziyorum.
	
	
	double number3=6.65;
	printf("%.3lf\n",number3);
	
	printf("%.3f %.3lf\n",number2,number3);
	printf("1.sayim %f 2.sayim %lf\n",number2,number3); //boyle de yazabiliriz.
	
	//char bir tane karakter tutar.
	char can='a';
	printf("Karakterim:%c\n",can);// can karakterinin icine a yi atadi.Artik can yerine a tutuluyor. 
	
	int number4;
	
	printf("please give a number:\n");
	scanf("%d",&number4);
	printf("the number that we took:%d",number4);//shift+6 ile koydugumuz & sembolu aldigimiz sayiyi degiskene atar.
	
	
	
	//KullanÄ±cÄ±dan 2 adet sayÄ± ve isminin baÅŸ harfini alÄ±nÄ±z ilk sayim bu
    // 2. sayÄ±m bu ismimim baÅŸ harfi bu ÅŸeklinde ekrana bastÄ±rÄ±nÄ±z

    int ilksayim;
    float ikincisayim;
    char basharfim;


    printf("\nLutfen ilk sayiyi giriniz\n");
    scanf("%d",&ilksayim);

    printf("Lutfen ikinci sayiyi giriniz\n");
    scanf("%f",&ikincisayim);

    printf("Lutfen isminizin bas harfini giriniz\n");
    scanf(" %c",&basharfim);

    printf("Ilk sayim:%d Ikinci sayim:%f Isminizin bas harfi %c",ilksayim,ikincisayim,basharfim);
	
	
	
	//size of datada ne kadar yer kapladiðini soyler
	
	int can=20;
	
	printf("Can degiskeni hafizada %d byte kadar yer tutar\n",sizeof(can));
	
	printf("Int degiskeni hafizada %d byte kadar yer tutar\n",sizeof(int));
	
	printf("char degiskeni hafizada %d byte kadar yer tutar\n",sizeof(char));
	
	printf("float degiskeni hafizada %d byte kadar yer tutar\n",sizeof(float));
	
	printf("double degiskeni hafizada %d byte kadar yer tutar\n",sizeof(double));
	
	
	int sinem=8;
	float sayim=8.8;
	double doublesayim=5.5464;
	char karakterim='k';
	
	
	
	
	printf("Int degiskeni hafizada %d byte kadar yer tutar\n",sizeof(sinem));
	
	printf("char degiskeni hafizada %d byte kadar yer tutar\n",sizeof(karakterim));
	
	printf("float degiskeni hafizada %d byte kadar yer tutar\n",sizeof(sayim));
	
	printf("double degiskeni hafizada %d byte kadar yer tutar\n\n\n\n\n\n",sizeof(doublesayim));
	
	
	
	const int number=15; // constun icine yazilan deger degistirilemez.
	sayim=20;
	
	printf("%d\n",number); // number ciktisi yine 15 olarak cikti.
	
	#define PI 3.14 //define ile tanimladigin deger de consttaki gibi degistirilemez.
	
	printf("PI=%f",PI);
	

	//ARITMETIK OPERATORLER
	/* Arithmetic Operator
	+	-	*	/	%	++	--
	
	*/
	
	int x=15;
	int y=20;
	int sonuc;
	int sonuc2;
	
	printf("\n%d",x+y);
	
	sonuc=x-y;
	
	printf("\n%d",sonuc);
	
	sonuc2=x*y;
	
	printf("\n%d",sonuc2);
	
	x++;
	++x; // x++ bir arttirmisti, bu da bir arttirdi o yuzden 17 oldu.
	
	printf("\n%d",x);
	
	printf("\n%d\n",--y); // degerimi direk bu sekilde de azaltabilirim.
	
	
	//ASSINGMENT OPERATORS
	// = += -= /= %=
	
	int z=25;
	
	z=z+3;
	
	z+=3;
	
	printf("%d\n",z);
	
	
	int k=25;
	
	k=k%4;
	
	k%=4;
	
	printf("%d\n",k);
	
	// assingments operaotler bu amacla iki sekilde kullanilabilir.
	
	
	//COMPARISON OPERATORS
	// ==  !=  >  <  >=  <=
	
	int s=56;
	int a=43;
	
	printf("%d\n",x==y); // false dondurecek
	
	printf("%d\n",x!=y); // true dondurecek
	
	
	// LOGICAL OPERATORS
	// && || !
	
	printf("%d\n",s>10&&s<57);
	
	printf("%d\n",a>100&&a<150);
	
	printf("%d\n",0<s<200);
	
	
	// IF ELSE 
	
	int b=32;
	int d=45;
	
	if(b>d)
    {
       printf("X Y den buyuktur\n");
    }
    else
    {
       printf("X Y den kucuktur veya esittir\n");
    }


    /*if(condition)
    {
        kodlar
    }
    else if(conditon)
    {
        kodlar
    }
     else if(conditon)
    {
        kodlar
    }
    else{

    } */


   int n;
   int m;

    printf("X sayisini giriniz\n");
    scanf("%d",&n);

    printf("Y sayisini giriniz\n");
    scanf("%d",&m);

    if(n < m)
    {
       printf("X Y den kucuktur");
    }
    else if(n == m){
        printf("X Y ye esittir");
    }
    else // ustteki iki kosul saglanmiyorsa else saglanir.
    {
       printf("X Y den buyuktur");
    }
	
	int u,l,t;
	
		printf("\nLutfen uc adet sayi giriniz:\n");
		scanf("%d\n%d\n%d",&u,&y,&t);
		
		if(u>l&&u>t){
			printf("en buyuk sayi u'dur.\n");
		}
		else if(l>u&&l>t){
			printf("en buyuk sayi l'dir.\n");
		}
		else if(t>u&&t>l){
			printf("en buyuk sayi t'dir.\n");
		}
		else{
			printf("hepsi birbirine esittir.\n");
		}
	
	int girilen_sayi;
	
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&girilen_sayi);
	
	if(girilen_sayi%2==0){
		printf("Girilen sayi cift sayidir.\n");
	}
	else{
		printf("Girilen sayi tek sayidir.\n");
	}
	
	
	
	//FOR 
	
	
	//for(initializationStatement; testExpression; UpdateStatement){}
	
	
	int i;
	
	//1den 5e kadar olan sayilari bastirmak istiyorsak
	for(i=1; i<=5; i++)
	{
	 	printf("%d",i);	
	}
	
	
	int h;

	int sum=0;
	
	//1 den girecegi sayiya kadar olan degerlerin toplami
	printf("Lutfen bir sayi giriniz:\n");
	scanf("%d",&h);
	
	for(i=1;i<=h;i++){
		sum=sum+i;	
	}
	
	printf("toplam budur %d",sum);
	
	//birden 10 a kadar olan tek ve cift sayilari yazdiran program
	
	
	for(i=0;i<=10;i+=2);
	{
		printf("%d\n",i);
	}
	
	//while dongusu;
	
	/*while(kosul){
		the body of loop
	}*/
	
	while(i<5){
		printf("%d\n",i);
		i++;
	}
	
	
	/*
    Bir sayý giriniz: 100
        100
        200
        300
        400
        500
        600
        700
        800
        900
        1000
    */
    int sayim;

    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&sayim);

    int i = 1;

    while (i<=10) {

        printf("%d\n",i*sayim);
        i++;
    }

	/*
    O dan 10 a kadar olan tek ve çift sayýlarý while döngüsü kullanarak bastýrýnýz
    */

    int i=0;
    while(i<10)
    {
        printf("%d ",i+1);
        i += 2;
    }

	
	/*10 dan baslayip bir azalta azalta 1 e kadar olan sayilari ekrana bastiriniz*/

    int i = 10;
    while (i>0) {

        printf("%d\n",i);
        i--;
    }
	
	
	//donguden cikamayan bir kod yazalim. i hep sifirdan kucuk o yuzden kod kafayi yer	
	int i=0;
	while(i<10){
		printf("%d",i);
	}	
	
	
	
	return 0; //hata yok, program basarili bir sekilde calisiyor demek, olmasa da olur.
	
}




