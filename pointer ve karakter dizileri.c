#include<stdio.h>
#include<stdlib.h>

int main()
{
	char isim[10]={'s','i','n','3','m'};
	char *can;
	
	
	printf("%c\n",*can); // can degerini cagirdigimiz zaman isim 0 in degerini basacaktir.
	
	printf("%c\n",(*can+1));
	
	printf("%c\n",(*can+2));
	
	printf("%c\n",(*can+3));
	
	for(can=isim;can<isim+10;can++){
		printf("&c",*can);
		
	}
	
}
