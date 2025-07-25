#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	int percent;
	a=90;
	b=85;
	c=80;
	d=75;
	cout <<"ENTER the percentage :";
	cin>>percent;
	if(percent>90){
		cout<<"CONGRAGULATION YOU HAVE GOTTEN 'A' GRADE AND HIGH SCORE!!";
		 }
	else if(percent>85){
		cout<<"CONGRAGULATION YOU HAVE GOTTEN 'B' GRADE AND HIGH SCORE!!";}
	else if(percent>80){
		cout<<"CONGRAGULATION YOU HAVE GOTTEN 'C' GRADE AND HIGH SCORE!!";}
	else if(percent>75){
		cout<<"CONGRAGULATION YOU HAVE GOTTEN 'D' GRADE AND HIGH SCORE!!";	
	}
	else{cout<<"You scored satisfactory,better luck next time.";
	}
}
