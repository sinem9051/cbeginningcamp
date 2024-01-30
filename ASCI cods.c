#include<stdio.h>
#include<stdlib.h>


int main(){
	
	printf("%d\t %d\t %d\t\n",'a','b','c');

	//printf("%d\t %d\t %d\t\n",a,b,c);// error
	
	
	int i;
	for(i='a';i<='z';i++){
		
		printf("%c",i);
	}


//Klavyeden girilen her karakterin bir asci kodu oldugu icin birer birer arttirdigimda o karatere gelen asci kodunu arttirmis oluyorum


	return 0;

	
}
