#include<iostream>
using namespace std;
class person
{
    char name[50];
    int age;
    public:
    void getdata(void);
    void display(void);
 
};

    void person::getdata(void)
    {
 cout<<"what is your name:";
 cin>>name;
 cout<<"what is your age:";
 cin>>age;
}
void person:: display(void)
{
    cout<<"\nname"<<name;
    cout<<"\nage"<<age;
}
int main()

{
person p;
p.getdata();
p.display();
 return 0;
 }



