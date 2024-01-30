#include <iostream>

using namespace std;

double given numbers(double a, double b){
	cout<<"The sum of numbers: "<<a+b<<endl;
	cout<<"The multiplication of numbers: "<<a*b<<endl;
}
int given numbers(int a, int b){	
	cout<<"The sum of numbers: "<<a+b<<endl;
	cout<<"The multiplication of numbers: "<<a*b<<endl;
}

int main(){
	double m,n;
	cout<<"Give to numbers to calculate sum and multiplication"<<endl;
	cin>>m>>n;
	given numbers(m,n);
	return 0;	
}
