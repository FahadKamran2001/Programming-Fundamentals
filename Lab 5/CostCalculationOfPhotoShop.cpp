#include <iostream>
using namespace std;
int main(){
//declaring variables
void colouredphoto();
void bwphoto();
void sketch();
int choicemain;
//displaying main choices to user to choose from
cout<<"Choose One of the following types of Photo Type"<<endl;
cout<<"***********************************************"<<endl;
cout<<"Press 1 for Coloured Photo"<<endl;
cout<<"Press 2 for Black & White Photo"<<endl;
cout<<"Press 3 for Sketch "<<endl;
cin>>choicemain;
//calling function according to main choice
if (choicemain==1){
	colouredphoto();}
else if(choicemain==2){
	bwphoto();}
else if(choicemain==3){
	sketch();}
else {
cout<<"Wrong choice entry"<<endl;}
}
	//displaying choices for coloured photos
void colouredphoto(){
	void costtotal(int choice, int nphotos);
	int choice2, numphotos;
	cout<<"Choose one of the following sizes of photo"<<endl;
	cout<<"******************************************"<<endl;
	cout<<"Press 1 for Passport Size Photograph for Rs. 10/-"<<endl;
	cout<<"Press 2 for 6’ x 4’ Photograph for Rs. 30/-"<<endl;
	cout<<"Press 3 for 5’ x 11' Photograph for Rs. 50/-"<<endl;
	cin>>choice2;
	cout<<"Enter number of photos you would like"<<endl;
	cin>>numphotos;
	costtotal(choice2, numphotos);
	}
	//displaying choices for black and white photos
void bwphoto(){
	void costtotal(int choice, int nphotos);
	int choice2, numphotos;
	cout<<"Choose one of the following sizes of photo"<<endl;
	cout<<"******************************************"<<endl;
	cout<<"Press 4 for Passport Size Photograph for Rs. 12/-"<<endl;
	cout<<"Press 5 for 6’ x 4’ Photograph for Rs. 35/-"<<endl;
	cout<<"Press 6 for 5’ x 11’ Photograph for Rs. 60/-"<<endl;
	cin>>choice2;
	cout<<"Enter number of photos you would like"<<endl;
	cin>>numphotos;
	costtotal(choice2, numphotos);
	}
	//displaying choices for sketch choice
void sketch(){
	void costtotal(int choice, int nphotos);
	int choice2, numphotos;
	cout<<"Choose one of the following sizes of photo"<<endl;
	cout<<"******************************************"<<endl;
	cout<<"Press 7 for Passport Size Photograph for Rs. 15/-"<<endl;
	cout<<"Press 8 for 6’ x 4’ Photograph for Rs. 40/-"<<endl;
	cout<<"Press 9 for 5’ x 11’ Photograph for Rs. 80/-"<<endl;
	cin>>choice2;
	cout<<"Enter number of photos you would like"<<endl;
	cin>>numphotos;
	costtotal(choice2, numphotos);
	}
	//function that calculates total cost after user chooses type of photo and number of photos
void costtotal(int choice, int nphotos){
	int cost=0;
	if (choice==1){
	cost=nphotos*10;}
	else if(choice==2){
	cost=nphotos*30;}
	else if(choice==3){
	cost=nphotos*50;}
	else if(choice==4){
	cost=nphotos*12;}
	else if(choice==5){
	cost=nphotos*35;}
	else if(choice==6){
	cost=nphotos*60;}
	else if(choice==7){
	cost=nphotos*15;}
	else if(choice==8){
	cost=nphotos*40;}
	else if(choice==9){
	cost=nphotos*80;}
	else{
	cout<<"Wrong choice"<<endl;}
	//displaying total cost in tht end
	cout<<"The total amount to be inserted into the machine : "<<cost<<endl;
	}
	
	
	
