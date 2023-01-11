#include <iostream>
#include <iomanip>
using namespace std;
int main(){

int num1=1;
while (num1>0){
	cout<<"Enter the year"<<endl;
	cout<<"Enter 0 to exit"<<endl;
	cin>>num1;
	(num1%4)?cout<<"It is a leap year":cout<<"It is not a leap year";
cout<<"\n\n";
}
}

