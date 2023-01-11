#include <iostream>
using namespace std;
int main()
{ float salesprice1, salesprice2, sale1, sale2, totalsales, tax, newprice;

cout<<"Enter sales quatity for item 1"<<endl;
cin>>sale1;
cout<<"Enter unit price for sales 1"<<endl;
cin>>salesprice1;

cout<<"Enter sales quantity for item 2"<<endl;
cin>>sale2;
cout<<"Enter unit price for sales 2"<<endl;
cin>>salesprice2;
totalsales = (salesprice1*sale1)+(salesprice2*sale2);
cout<<"Total Sales amount before tax deduction for the two items is : "<<totalsales<<endl;
tax = totalsales*0.10;
newprice = totalsales-tax;
cout<<"Total Sales amount after tax deduction for the two items is : "<<newprice<<endl;
}
