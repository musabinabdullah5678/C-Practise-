#include<iostream>
using namespace std;
int main  (){
  int seconds,minutes,hours,days,weeks,months,years;
  
  cout<<"Enter the number of seconds :";
  cin>>seconds;
  
  minutes = seconds/60;
  hours   = minutes/60;
  days    = minutes/24;
  weeks   = days/7;
  months = weeks/4;
  years   = months/12;
  
    cout<<" seconds :"<<seconds<<endl;
    cout<<" minutes :"<<minutes<<endl;
    cout<<" hours :"<<hours<<endl;
    cout<<" days :"<<days<<endl;
    cout<<" weeks :"<<weeks<<endl;
    cout<<" months :"<<months<<endl;
    cout<<" years :"<<years<<endl;
    
    int choice;
    cout<<"you wish to convert seconds into ..."endl;
    
    cout<<"1 Minutes"<<endl;
    cout<<"2 Hours"<<endl;
    cout<<"3 Days"<<endl;
    cout<<"4 Weeks"<<endl;
    cout<<"5 Months"<<endl;
	cout<<"6 Years "<<endl;  
	cout<<"Enter numeric value (1/6)): ";
	cin>>choice;
	
	if(choice == 1){
	cout<<" minutes :"<<minutes<<endl;	
	}
	if(choice == 2){
	cout<<" hours :"<<hours<<endl;
	}
	if(choice == 3){
	cout<<" days :"<<days<<endl;
	}
	if(choice == 4){
	cout<<" weeks :"<<weeks<<endl;
	}
	if(choice == 5){
	cout<<" months :"<<months<<endl;
	}
	if(choice == 6){
	cout<<" years :"<<years<<endl;
	}
}
