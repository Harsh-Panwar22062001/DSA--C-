#include<iostream>
using namespace std;
int main()
{
    while(true)
    {
    cout<<"enter the first number"<<endl;
    double first_number;
    cin>>first_number;
    cout<<"enter the your fav operator"<<endl;
    char oper;
    cin>>oper;

cout<<"enter the second number"<<endl;
    double second_number;
    cin>>second_number;
    double result;
    switch (oper)
    {
    case('-'):
    result=first_number-second_number; /* constant-expression */
        /* code */
        break;
        case('/'):
    result=first_number/second_number; /* constant-expression */
        /* code */
        break;
        case('*'):
    result=first_number*second_number; /* constant-expression */
        /* code */
        break;
    case('+'):
    result=first_number+second_number; /* constant-expression */
        /* code */
        break;
    default:
    cout<<"operator overflow"<<endl;

        break;
    }
    cout<<result<<endl;
cout<<"do you want more calculations"<<endl;
char more;
cin>>more;
if(more=='y'|| more=='Y')
{cout<<"\n";
}
else 
{
break;

}
    }



    /* code */



}
