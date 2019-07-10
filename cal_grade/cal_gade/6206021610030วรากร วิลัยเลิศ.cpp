//6206021610030 warakon wilailoet ITRA
#include<iostream>
using namespace std;
int main()
{
	int score ;
	cout << "======Calculate Grade======\n";
	cout <<"Enter score : ";
	cin >> score;
	if(score>=90 && score<=100){
		cout<<"Your grade : A ";
	}
	else if(score>=80 && score<=89){
		cout<<"Your grade : B ";
	}
	else if(score>=70 && score<=79){
		cout<<"Your grade : C ";
	}
	else if(score>=60 && score<=69){
		cout<<"Your grade : D ";
	}
	else if(score>=0 && score<=59){
		cout<<"Your grade : F ";
		
	}
	else{
		cout <<"Error";
	}
	cout<<endl;
	cout<<"===========================\n";
	
		return(0);
	
}