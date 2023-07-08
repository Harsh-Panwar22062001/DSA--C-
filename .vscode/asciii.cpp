#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"   Enter the Value  ";

    cin>>a;
    if(a>='A'&& a<='Z')
    {
    cout<<"Uppercase";
    }
    
    else if(a>='a'&& a<='z')
    {
    cout<<"lowercase";
    }
    else if(a>='0' && a<='9')
    {
    cout<<"numeric character";
    }

}