#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i;
	int j;
	int n;

	printf("how many columns matrix do you want");
	scanf("%d",&n);
	
	int array[n][n];
	
	printf("\n\np");
	for (i=0;i<n;i++){
		printf("%4d",i);
	}
	printf("\nn\n");
	
	
	
	for(i=0;i<n;i++){
		printf("----");
	}
	printf("\n");
	
	
	
	for(i=0;i<n;i++){
		array[i][i]=1;
		array[i][0]=1;
		for(j=1;j<i;j++)
		{
		array[i][j]=array[i-1][j]+array[i-1][j-1];	
		}
		
	}
	
	for(i=0;i<n;i++){
		printf("%d --",i);
		for(j=0;j<=i;j++){
			printf("%4d",array[i][j]);
		}
		printf("\n");
	}
	
	
	
	
}
