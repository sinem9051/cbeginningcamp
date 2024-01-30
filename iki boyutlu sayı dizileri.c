#include<stdio.h>
#include<stdlib.h>

int main(){
	
	/*int dizi1[2][2]={{4,6},{2,3}};
	printf("%d",dizi[1][0]);
	//yazdirirken birinci indexin sifirinci indexini yazdirdik.
	*/
	
	int dizi[10][10];
	int i,j;
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(i==j){
			dizi[i][j]=1;
			}
		 	else{
		 	dizi[i][j]=0;
			}
		}
	}
	



	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%9d",dizi[i][j]);
	}
		printf("\n");
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
	
	
}
