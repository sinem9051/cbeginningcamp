#include<stdio.h>
#include<stdlib.h>

int main(){
	
	//casting:
	
	int number=9/4;
	printf("%d\n",number);
	// output should have been 2.25. But it has been 2. How can we solve that?
	
	
	float number2=9/4;
	printf("%f\n",number2);
	// sonuc 2.25 olmaliydi ama 2.000 olarak cikti.
	
	float number3=(float)9/4;
	printf("%f\n",number3);	
	
	return 0;
}
