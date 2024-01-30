#include <stdio.h>
#include <stdlib.h>

int main()
{
	char cumlem[100];
	char *p1,*p2;
	int kontrol;
	
	printf("Lutfen max 100 karakterli bir cumle giriniz.\n");
	
	gets(cumlem); //scanf boslugu gordugu zaman islemi bitirir o yuzden gets ile cumlemizi aldik
	
	for(p2=cumlem;*p2;p2++);
	p2--;
	
	kontrol=1;
	
	for(p1=cumlem;p1<p2;p1++,p2--)
	{
		if(*p1!=*p2)
		{
			kontrol=0;
		
		}

	}
	
	if(kontrol==1)
	{
		printf("Girilen %s bir polindromdur", cumlem);
	}
	else
	{
		printf("Girilen %s bir palendrom degildir.",cumlem);
	}
	
}
