#include <iostream>
using namespace std;
int main(){
int  total, newprice, null;
double discount;
cout<<"Enter total purchase"<<endl;
cin>>total;
(total<1000)?discount=0.10:null=0;
((total>=1000)&&(total<=2000))?discount=0.20:null=0;
((total>2000)&&(total<=5000))?discount=0.30:null=0;
((total>5000)&&(total<=7500))?discount=0.40:null=0;
(total>7500)?discount=0.30:null=0;
newprice = total*(1+discount);
discount=total*discount;
cout<<"Total Purchase		Rs/- "<<total<<endl;
cout<<"Discount			Rs/- "<<discount<<endl;
cout<<"----------------------------------"<<endl;
cout<<"New Price		Rs/- "<<newprice<<endl;
}
