#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a,b,c,discriminent;
double root, root0;
cout<<"Enter value of a from ax^2"<<endl;
cin>>a;
cout<<"Enter value of b from bx"<<endl;
cin>>b;
cout<<"Enter value of c"<<endl;
cin>>c;
discriminent=pow(b,2)-(4*a*c);
switch(discriminent>0){
	case 1:
		{root=(-b+sqrt(discriminent))/(2*a);
		cout<<"Roots are ;"<<endl;
		cout<<root<<endl;
		root=(-b-sqrt(discriminent))/(2*a);
		cout<<root<<endl;
		break;}
	case 0:
		switch(discriminent<0){
			case 0:{
				root0=(-b)/(2*a);
				cout<<"The root is : "<<root0<<endl;
				break;}
			case 1:{
				root0=(-b)/(2*a);
				root=(sqrt(discriminent*-1))/(2*a);
				cout<<"Roots are ;"<<endl;
				cout<<root0<<"+i"<<root<<endl;
				cout<<root0<<"-i"<<root<<endl;
				break;}
		}
	default:
		break;
}

}
