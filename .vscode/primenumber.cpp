#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
    int num, i, f;
 
    //Reading a number from user
    cout<<"Enter any number:";
    cin>>num;
 
    f = 0;
    i = 2;
    while(i <= num/2)
    {
        if(num%i == 0)
        {
            f=1;
            break;
        }
        i++;
    }
    if(f == 0)
 
        cout<<num<<" is a Prime Number"<<endl;
    else
 
        cout<<num<<" is Not a Prime Number"<<endl;
 
   return 0;
}