#include<iostream>
using namespace std;
int main()
{
   int a, b;
   cout<<"enter the value of a: " ;
   cin>>a;
   
   cout<<"enter the value of b: " ;
   cin>>b;
   
   if (a>b)
   {
        cout<<"a is greater than b."<< endl;
   }
   
   else if (a<b)
   {
        cout<<"b is greater than a."<< endl;
   }
   
   else
   {
        cout<<"a and b are equal"<< endl;
   }
   
   return 0;
}