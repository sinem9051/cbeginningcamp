#include <stdio.h>
#include <stdlib.h>

void degistir(int ad1,int ad2){
	
	int gecici;
	gecici=ad1;
	ad1=ad2;
	ad2=gecici;	
	printf("ilk sayim %d ikinci sayim %d",ad1,ad2);
}


void degistir2(int *ad1,int *ad2){
	
	int gecici;
	gecici=*ad1;
	*ad1=*ad2;
	*ad2=gecici;	
	printf("ilk sayim %d ikinci sayim %d",ad1,ad2);
}



int main()
{
	int a=10,b=20;
	
	printf("cagirmadan once %d %d\n\n",a,b);
	printf("cagirmadan once %d %d\n\n",&a,&b);
	degistir(a,b);
	printf("cagirdiktan sonra %d %d\n\n",a,b);
	printf("cagirdiktan sonra %d %d\n\n",&a,&b);	
	printf("adresle gondermezsek fonksiyondan sonra o degerim degismez, ama adresle gonderirsem kodun sonraki kismi icind e degerlerim degismis olur\n");



	printf("cagirmadan once %d %d\n\n",a,b);
	printf("cagirmadan once %d %d\n",&a,&b);
	degistir2(&a,&b);
	printf("cagirdiktan sonra %d %d\n\n",a,b);
	printf("cagirdiktan sonra %d %d\n\n",&a,&b);	

}

