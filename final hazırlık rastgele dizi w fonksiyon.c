#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int ikibasamakli(int x){
	int i;
	for(i=0;i<x;i++){
	if(x/10>=1 && x/10<10){
		return 1;
		}
	else{
		return 0;
	}
	}
		
	
}



int main(){
	int i;
	int b[60];
	int sonuc;
	
	for(i=0;i<60;i++){
	b[i]=0+rand()%15;
	}
	
	
	
	for(i=0;i<60;i++){
	sonuc=ikibasamakli(b[i]);
	if(sonuc==1){
		printf("%d is iki basamakli\n",b[i]);
		}
	else if(sonuc==0){
		printf("%d iki basamakli degildir\n",b[i]);
	}
	}
	
	
}

