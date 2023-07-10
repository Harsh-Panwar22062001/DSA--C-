#include <iostream>
using namespace std;
int main()
{
    int n;
    
    cout << "enter the number" << endl;
cin>>n;

    bool  isprime = true;

    for (int i = 2; i*i<=n; i++)
    {
        if (n % i == 0)
        {
            isprime= false;
            break;
        }
    }
        if (isprime && n>1 )
        {
            cout<<"it a prime number"<<endl;
        }
        else
        {
            cout<<"it not a prime number"<<endl;
        }
       return 0; 
    }

