#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i,max,min;
	int array[5];
	printf("enter 5 numbers");
	for(i=0;i<5;i++){
		scanf("%d",&array[i]);
		
	}
	
	for(i=0;i<5;i++){
	printf("%d\t",array[i]);
	}
	
	max=min=array[0];
	
	for(i=1;i<5;i++){
		if(max<array[i]){
			max=array[i];
		}
		else{
			min=array[i];
		}
	}
	printf("\nmax value is %d\n",max);
	printf("min value is %d",min);
}


