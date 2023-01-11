#include <iostream>
using namespace std;
//declaring functions for each of the 4 operands to be chosen by user
int sum(int num1, int num2);
double sub(int num1,int num2);
int mul(int num1, int num2);
double divi(int num1, int num2);

int main(){
	int n1, n2, choice;
	double ans;
	//retrieving the two numbers from user
	cout<<"Enter first number"<<endl;
	cin>>n1;
	cout<<"Enter second number"<<endl;
	cin>>n2;
	//asking user the operand he would like to use
	cout<<"Choose one of the following operand"<<endl;
	cout<<"Press 1 for addition"<<endl;
	cout<<"Press 2 for subtraction"<<endl;
	cout<<"Press 3 for Multiplication"<<endl;
	cout<<"Press 4 for Division"<<endl;
	cin>>choice;
	//calling function based on the chosen operand
	if(choice==1){
		ans=sum(n1,n2);}
	else if(choice==2){
		ans=sub(n1,n2);}
	else if(choice==3){
		ans=mul(n1,n2);}
	else if(choice==4){
		ans=divi(n1,n2);}
	else{
		cout<<"Invalid entry"<<endl;}
		//displaying final answer to user
	cout<<"The answer is : "<<ans<<endl;
}
//function for calculation of sums of the two numbers
int sum(int num1, int num2){
	int a =0;
	a=num1+num2;
	return a;
}
//function for subtraction of the two numbers
double sub(int num1,int num2){
	double a = 0;
	a=num1-num2;
	return a;
}
//function for multiplication of the two numbers
int mul(int num1, int num2){
	int a = 0;
	a = num1*num2;
	return a;
}
//function for division of the two numbers
double divi(int num1, int num2){
	double a = 0;
	//using if statement to check whether denominator is 0 or not and carryingout calculation accordingly
	if (num2!= 0){
		a= num1/num2;}
	else{
		cout<<"Division not possible"<<endl;}
	return a;
}

	
	
