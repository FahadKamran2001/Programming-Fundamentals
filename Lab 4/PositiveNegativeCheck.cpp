#include <iostream>

using namespace std;
int main(){

int num1;
cout<<"Enter Number"<<endl;
cin>>num1;
switch(num1>=0){
case 1:
	cout<<"your number is positive"<<endl;
	break;
default:
	cout<<"your number is negative"<<endl;
	break;
}
}
