#include <iostream>
#include <time.h>
using namespace std;

long double fib2(int n)
{
	long double i=1;
	long double j=0;
	int k;
	
	for(k=1;k<=n;k++)
	{
		j=i+j;
		i=j-i;
	}
	return j;
}

int main()
{
	clock_t t;
	t= clock();
	
	cout<<fib2(10)<<endl;
	cout<<fib2(30)<<endl;
	cout<<fib2(50)<<endl;
	cout<<fib2(100)<<endl;
	cout<<fib2(1000)<<endl;
	cout<<fib2(10000)<<endl;
	
	t=clock()-t;
	cout<<"Timpul:"<<((float)t)/CLOCKS_PER_SEC<<endl;

}
	
