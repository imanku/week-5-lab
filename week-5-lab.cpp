#include <iostream>
#include <math.h>
#include <fstream>

int main()
{
 using std::cout;
 using std::endl;
 using std::cin;
 int a,b;
 cout<<"Enter any two integers"<<endl;
 cout<<"Enter the value of a= "<<endl;
 cin>>a;
 cout<<"Enter the value of b= "<<endl;
 cin>>b;
 
 auto  c = sqrt(pow(a,2) + pow(b,2));

 cout<<"The third side = "<<c<<endl;
 std::ofstream myfile;
 myfile.open(" example.txt ");
 if (myfile<<" your triangle has three sides width "<<a<<" , height "<<b<<", breadth are "<<c);

 myfile.close();
 
 return 0;
}
