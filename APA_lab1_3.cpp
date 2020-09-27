#include <iostream>
#include <time.h>
using namespace std;

long double fib3(int n)
{
	long double i=1;
	long double j=0;
	long double k=0;
	long double h=1;
	long double t;
	
	while (n>0)
	{
		if(n%2!=0)
		{
			t=j*h;
			j=i*h + j*k +t;
			i= i*k +t;
		}
		t=h*h;
		h=2*k*h+t;
		k=k*k+t;
		n=n/2;		
	}	
	
	return j;
}

int main()
{
	clock_t t;
	t= clock();
	
	cout<<fib3(10)<<endl;
	cout<<fib3(30)<<endl;
	cout<<fib3(50)<<endl;
	cout<<fib3(100)<<endl;
	cout<<fib3(1000)<<endl;
	cout<<fib3(10000)<<endl;
	
	t=clock()-t;
	cout<<"Timpul:"<<((float)t)/CLOCKS_PER_SEC<<endl;
}
	
