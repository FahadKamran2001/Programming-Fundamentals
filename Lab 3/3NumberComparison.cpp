#include <iostream>
using namespace std;
//declaration of variables
int main(){ int num1, num2, num3;
 //ask the users to enter three numbers to be stored in the previous three variables
 cout<<"Enter the first number for comparison"<<endl;
 cin>>num1;
 cout<<"Enter the second number for comparison"<<endl;
 cin>>num2;
 cout<<"Enter the third number for comparison"<<endl;
 cin>>num3;
 //using if statements to see which number is the greatest
 if(num1<num2)
 {if(num1<num3)
 {cout<<num1<<" is the smallest"<<endl;}
 else if(num3<num1)
 {cout<<num3<<" is the smallest"<<endl;}}
else if(num2<num1)
{if(num2<num3)
 {cout<<num1<<" is the smallest"<<endl;}
 else if(num3<num2)
 {cout<<num3<<" is the smallest"<<endl;}}
else if(num1==num2)
{if(num1<num3)
 {cout<<num1<<" is the smallest"<<endl;}
 else if(num3<num1)
 {cout<<num3<<" is the smallest"<<endl;}}
 else if(num1==num3)
{if(num1<num2)
 {cout<<num1<<" is the smallest"<<endl;}
 else if(num2<num1)
 {cout<<num2<<" is the smallest"<<endl;}}
 }
