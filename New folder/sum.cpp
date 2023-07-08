#include <iostream>
#include <cstdio>
using namespace std;

   int main() 
   {
int max=0;
int a,b,c,d;
cin>>a>>b>>c>>d;
if(a>=b && a>=c && c>=d)
{
    max = a;
}
else if(b>=a && b>=c && b>=d)
{
    max =b;
}
else if(c>=a && c>=b && c>=d)
{
    max =c;
}

else
{
    max =d;
}
cout<< max;

}