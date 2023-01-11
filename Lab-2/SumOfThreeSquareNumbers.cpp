#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a, b, c, sqrabc;
cout<<"Enter first number"<<endl;
cin>>a;
cout<<"Enter second number"<<endl;
cin>>b;
cout<<"Enter third number"<<endl;
cin>>c;
sqrabc = pow(a,2)+pow(b,2)+pow(c,2)+2*((a*b)+(b*c)+(c*a));
cout<<"The the square of the sum of these numbers is : "<<sqrabc<<endl;
}
