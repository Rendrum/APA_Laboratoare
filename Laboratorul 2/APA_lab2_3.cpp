#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int low=2, high, i, prim;
    int iter=0;
    int nr=0;

    cout << "Pana la care numar sa se determine numerele prime (n>2)"<<endl;
    cin >> high;

    cout << "Numerele prime sunt"<<endl;

    while (low < high)
    {
        iter++;
        prim = 0; 
        for( int i = 2; i <= sqrt(low) ;i++)
        {
            iter++;
            if(low % i == 0)
            {   
                iter--;
                prim = 1;
                break;
            }
            
        }

        if (prim == 0)
        {  
            cout << low << " ";            nr++;
        }
         ++low;
    }
    cout<<endl;
    cout<<"Numarul de iteratii este: "<<iter<<endl;
    cout<<"Numarul prime: "<<nr<<endl;

    return 0;
}