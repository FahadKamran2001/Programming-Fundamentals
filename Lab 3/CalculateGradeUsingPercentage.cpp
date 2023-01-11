#include <iostream>
using namespace std;
int main(){
//declaration of variable
int grade=-1;
//using while loops to make sure the enterted score is a valid positive integer
while((grade<0)||(grade>100)){
cout<<"Enter your grade score"<<endl;
cin>>grade;
}
//using if statements to find out the grade equivilant for the score
if (grade >=90){
cout<<"Your grade is A+"<<endl;}
else if ((grade <90)&&(grade>79)){
cout<<"Your grade is A"<<endl;}
else if ((grade <80)&&(grade>69)){
cout<<"Your grade is B"<<endl;}
else if ((grade <70)&&(grade>59)){
cout<<"Your grade is C"<<endl;}
else if ((grade <60)&&(grade>49)){
cout<<"Your grade is D"<<endl;}
else if (grade <50){
cout<<"Your grade is F"<<endl;}
}
