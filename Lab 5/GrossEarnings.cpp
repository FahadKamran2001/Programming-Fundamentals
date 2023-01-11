#include <iostream>
using namespace std;
//declaring prototype for function grossweek
double grossweek (int gw);
int main(){
	int grossweekly;
	double earnings;
	cout<<"Enter your last week's gross sales"<<endl;
	cin>>grossweekly;
	//calling function to find earnings and saving into variable to be displayed later to user
	earnings = grossweek(grossweekly);
	//displayiing earnings to user
	cout<<"Your Earnings : "<<earnings<<endl;
}
//function that calculates weekly earnings based on previous week's gross sales
double grossweek(int gw){
	double earnings;
	earnings = (gw*0.09)+2000;
	return earnings;
	}
