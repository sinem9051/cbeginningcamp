#include<stdio.h>
#include<stdlib.h>



int main()
{
	
	int arr[]=[10,20,30,40,50];
	
	// dizinin ilk adresi 6000 ise ikinci elaman integer 4 bit olduğu icin 60004 tur.
	
	// dizinin ismi dizinin ilk elemaninin adresine yani arr=&arr[0]
	
	// bir sonraki elemaninin adresini nasil gosteririz.
	
	ptr=arr;
	ptr++; // 6001 degil 6004 e esit olur.
	(ptr+1);
	(ptr+2)//&arr[2] ye esit olur 6008 adresine
	*(ptr+2);// &arr[2] adresindeki degere esit olur.
	
	
}
