#include <iostream>
#include <math.h>

int main()
{
 using std::cout;
 using std::endl;
 using std::cin;
 int a,b,c;
 cout<<"Enter any two integers"<<endl;
 cout<<"Enter the value of a= "<<endl;
 cin>>a;
 cout<<"Enter the value of b= "<<endl;
 cin>>b;
 
 c=pow(a,2)+pow(b,2);
 auto d=sqrt(c);

 cout<<"The third side = "<<d<<endl;

 return 0;
}