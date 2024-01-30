#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int i;
	int b[60];
	int sonuc=0;
	
	for(i=0;i<60;i++){
	b[i]=0+rand()%150;
	}
	
	for(i=0;i<60;i++){
	if(b[i]/10>=1 && b[i]/10<10){
		printf("%d is iki basamakli\n",b[i]);
		}
	else{
		printf("%d iki basamakli degildir\n",b[i]);
	}
	}
	
	
}

