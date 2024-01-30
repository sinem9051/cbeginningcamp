#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int t[10];
	int i;
	int *p;
	
	p=t;
	
	for(i=0;i<10;i++)
	{
		t[i]=0;	
	}
	
	for(i=0;i<10;i++)	
	{
		printf("%d\n",t[i]);	
	}
	
	
//p degerini kullanarak da yazdirabiliriz.	
	
	for(i=0;i<10;i++)
	{
		t[i]=1;	
	}	
	
	for(p=t;p<t+10;p++)
	{
		printf("%d\n",*p);	
	}
	
	

	
		
	
}
