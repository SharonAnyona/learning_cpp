#include<iostream>
#include<string>
using namespace std;
int main (){

	int grade;
	int gradecounter;
	int total;
	int average;
	
	total=0;
	gradecounter=1;
	while(gradecounter<=10){
		cout<<"Enter the grade"<<endl;
		cin>>grade;
		total=total+grade;
		gradecounter++;	
	}
	average=total/gradecounter;
	cout<<"The grade average is "<<average<<endl;
 	return 0;
}
