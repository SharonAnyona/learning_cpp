#include<iostream>
using namespace std;
template <class T>
T calc(T a,T b){
	if(a%2!=0 && b%2!=0){
		cout<<a<<"and"<<b<<"are odd numbers"<<endl;
	}
	else if(a%2==0 && b%2==0){
		cout<<a<<"and"<<b<<"Are even numbers"<<endl;
	}
	else if(a%2!=0 && b%2==0){
		cout<<a<<"is an odd number but"<<b<<"is an even number"<<endl;
	}
	else if(a%2==0 && b%2!=0){
		cout<<a<<"is an even number but"<<b<<"is an odd number"<<endl;
	}
	else{
		cout<<"invalid input entered"<<endl;
	}
}
int main(){
	int x,y,z;
	z=0;
	while(z==0){
		cout<<"Enter 2 numbers"<<endl;
		cin>>x>>y;
		calc(x,y);
		cout<<"Enter 0 to exit game or any number to continue"<<endl;
		cin>>z;
	}
	cout<<"Thanks for using this app"<<endl;
	return 0;
}
