#include <stdio.h>
#include <stdlib.h>

int main()
{
	char cumlem[100];
	char *p1,*p2;
	int kontrol;
	
	printf("Lutfen max 100 karakterli bir cumle giriniz.\n");
	
	gets(cumlem); //scanf boslugu gordugu zaman islemi bitirir o yuzden gets ile cumlemizi aldik
	
	for(p2=cumlem;*p2;p2++)
	p2--;
	
	kontrol=1;
	
	for(p1=cumlem;kontrol p1<p2;p1++,p2--)
	{
		if(*p1!=*p2)
		{
			kontrol=0;
		
		}

	}
	
	if(kontrol)
	{
		printf("Girilen %s is bir polindromdur", cumlem);
	}
	
	
}
