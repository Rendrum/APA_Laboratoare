#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 
void ciurulLuiErastostene(int n,int* iter,int* nr);

int main() 
{ 
    int iter=0;
    int nr=0;
	int n;
    cout<<"Pana la care numar sa se afiseze numerele prime?"<<endl;
    cin>>n;

	cout << "Numerele prime mai mici sau egale cu "<< n << endl; 
	ciurulLuiErastostene(n,&iter,&nr); 
    cout<<endl;
    cout<<endl;
    cout<<"Numarul de iteratii este: "<<iter<<endl;
    cout<<"Numere prime: "<<nr<<endl;
	return 0; 
} 

void ciurulLuiErastostene(int n, int *iter, int *nr) 
{   
	bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 

	for (int p=2; p*p<=n; p++) 
	{ 
		if (prime[p] == true) 
		{ 
			for (int i=p*p; i<=n; i += p)
            {
                prime[i] = false;
                *iter=*iter+1;
            } 
				 
		}
	} 

	for (int p=2; p<=n; p++) 
    {
        if (prime[p]) 
        {
            cout << p << " "; 
            *nr=*nr+1;
        }
    }
} 

