#include <iostream>
using namespace std;
 int main()
{
unsigned int inch, yard, feet;
cout<<"Enter inches in integer form"<<endl;
cin >> inch;
feet = inch/12;
inch = inch%12;
yard = feet/3;
feet = feet%3;
cout<<yard<<" yards : "<<feet<<" feet : "<<inch<< " inches"<<endl;



}

