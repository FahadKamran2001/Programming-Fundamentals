#include <iostream>
#include <cmath>
using namespace std;
//declaring prototypes of functiosn
double circle();
double rectangle();
double triangle();

int main(){
	int choice=0;
	double ans=0;
	//asking user to choose type of calculation he would like to carry out
	cout<<"***Geometric Calculator***"<<endl;
	cout<<"Choose one of the following options"<<endl;
	cout<<"Press 1 for Area of Circle"<<endl;
	cout<<"Press 2 for Area of Rectangle"<<endl;
	cout<<"Press 3 for Area of Triangle"<<endl;
	cout<<"Press 4 to Exit"<<endl;
	cin>>choice;
	//calling function according to user choice
	if (choice==1){
		ans= circle();
		cout<<"The area of the circle is : "<<ans<<endl;}
	else if(choice ==2){
		ans=rectangle();
		cout<<"The area of rectangle is : "<<ans<<endl;}
	else if (choice==3){
		ans= triangle();
		cout<<"The area of triangle is : "<<ans<<endl;}
	else if (choice ==4){
		cout<<"Quitted"<<endl;}
	else{
		cout<<"Error, Wrong Entry"<<endl;}
}
//function for calculation of area of circle
double circle(){
	int pi = 3.14159, r=0;
	double area=0;
	cout<<"Enter the radius of the circle"<<endl;
	cin>>r;
	if(r>0){
	area = 2*pi*pow(r,2);}
	else{
	cout<<"Wrong input"<<endl;
	return area;
}
}
//function for calculation of area of rectangle
double rectangle(){
	int side1, side2;
	double area=0;
	cout<<"Enter length of side 1"<<endl;
	cin>>side1;
	if (side1>0){
	cout<<"Enter length of side 2"<<endl;
	cin>>side2;
	if(side2>0){
	area = side1*side2;}
	else{
		cout<<"wrong entry for side 2"<<endl;}}
	else{
		cout<<"wrong entry for side1"<<endl;}
	return area;
}
//function for calculation of area of triangle
double triangle(){
	int base , height ;
	double area=0;
	cout<<"Enter base of triangle"<<endl;
	cin>>base;
	if (base>0){
	cout<<"Enter height of triangle"<<endl;
	cin>>height;
	if (height>0){
	area = base*height*0.5;}
	else{
		cout<<"Wrong entry for height"<<endl;}}
	else{
		cout<<"wrong entry for base"<<endl;}
	return area;
}
		
	
