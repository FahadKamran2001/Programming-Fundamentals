#include <iostream>
using namespace std;
int main(){
//declaration of variables
 int num1, num2;
 //ask the users to enter two numbers to be stored in the previous two variables

 cout<<"Enter the first number for comparison"<<endl;
 cin>>num1;
 cout<<"Enter the second number for comparison"<<endl;
 cin>>num2;
 //using if statements to check whether the number is even of odd
 if(num1>num2)
 {cout<<num1<<" is greater than "<<num2<<endl;}
else if(num2>num1)
{cout<<num2<<" is greater than "<<num1<<endl;}
else if(num1==num2)
{cout<<num1<<" is equal to "<<num2<<endl;}}
