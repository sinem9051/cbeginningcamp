#include<stdio.h>
#include<stdlib.h>



int mukemmelsayi();



int main(){
	int sonuc;
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	sonuc=mukemmelsayi(sayi);
	if(sonuc==1)
	{
		printf("mukemmel sayi");
	}
	else
	{
		printf("degil");
	}
		
	
}



int mukemmelsayi(int number)
{
	int i=1;
	int toplam=0;
	
	while(i<number)
	{
		if(number%i==0)
		{
		toplam=toplam+i;
		}
		i++;
	}
	
	if(toplam==number){
		return 1;
	}
	else{
		return 0;
	}
}



