#include <iostream>
using namespace std;

int main(){
	int marks;
	cout<<"Enter your Marks: ";
	cin>>marks;
	
	if(marks>=75 && marks<=100){
		cout<<"You got Grade 'A' ";
	}
	else if(marks>=65 && marks<=74){
		cout<<"You got Grade 'B' ";
	}
	else if(marks>=45 && marks<=64){
		cout<<"You got Grade'C' ";
	}
	else if(marks>=30 && marks<=44){
		cout<<"You got Grade 'D' ";
	}
	else if(marks>100){
		cout<<"Sorry!!! You Entered an incorrect Marks it range between (100% to 0%)";
	}
	else{
		cout<<"You got Grade'F ' ";
	}
	
	return 0;
}
