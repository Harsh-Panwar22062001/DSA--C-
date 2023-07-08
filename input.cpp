#include<iostream>
using namespace std;
int main()
{
    string str1 ="hello";

    cout<<"name before push back"<<str1<<endl;

     str1.push_back(' ');
    str1.push_back('F');
    str1.push_back('r');
    str1.push_back('i');
    str1.push_back('e');
    str1.push_back('n');
    str1.push_back('d');
    str1.push_back('s');

    cout<<"name after push back"<<str1<<endl;
    return 0;
}