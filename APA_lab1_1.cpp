#include <iostream>
#include <time.h>
using namespace std;

long double fib1(int n)
{
	if (n<2)
	{
		return n;
	}
	else
	{
		return fib1(n-1)+fib1(n-2);
	}
}

int main()
{	
	clock_t t;
	t= clock();
	
	cout<<fib1(10)<<endl;
	cout<<fib1(30)<<endl;
	/*
	cout<<fib1(50)<<endl;
	cout<<fib1(100)<<endl;
	cout<<fib1(1000)<<endl;
	cout<<fib1(10000)<<endl;
	*/
	t=clock()-t;
	cout<<"Timpul:"<<((float)t)/CLOCKS_PER_SEC<<endl;

}
