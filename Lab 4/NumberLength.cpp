#include <iostream>
using namespace std;
int main(){
int num1, len,check;
cout<<"Enter a number between 1 and 99999"<<endl;
cin>>num1;
cout<<"\n\n";
cout<<"*****CALCULATING THE LENGTH OF YOUR NUMBER*****"<<endl;
(num1<10)?len=1:check=0;
((num1<100)&&(num1>9))?len=2:check=0;
((num1<1000)&&(num1>99))?len=3:check=0;
((num1<10000)&&(num1>999))?len=4:check=0;
((num1<100000)&&(num1>9999))?len=5:check=0;
switch(len){

case 1:
	{cout<<"Length of the number "<<num1<<" is "<<len<<endl;
	break;}
case 2:
	{cout<<"Length of the number "<<num1<<" is "<<len<<endl;
	break;}
case 3:
	{cout<<"Length of the number "<<num1<<" is "<<len<<endl;
	break;}
case 4:
	{cout<<"Length of the number "<<num1<<" is "<<len<<endl;
	break;}
case 5:
	{cout<<"Length of the number "<<num1<<" is "<<len<<endl;
	break;}
default:
	{cout<<"Number not within range allowed"<<endl;
	break;}
}

}
