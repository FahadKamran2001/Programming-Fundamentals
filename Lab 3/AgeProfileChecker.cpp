#include <iostream>
using namespace std;
//declarationof the variable age
int main(){ int age;
age = -1;
//asking user to enter age until it is valid
while(age < 0){
cout<<"Enter the age"<<endl;
cin>>age;}
//checking using if statements to see under which age profile the person falls under
if (age<18){
cout<<"You are a child"<<endl;}
else if (age<65){
cout<<"You are an adult"<<endl;}
else if (age>=65){
cout<<"You are a senior citizen"<<endl;}



}
