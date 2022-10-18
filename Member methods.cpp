#include<iostream>
using namespace std;
class Safari{
	private:int L,W;
	friend void Get(Safari s);
	public:void compute(int a,int b){
		cout<<"Product is"<<a*b<<endl;
	}
	public:Safari(){
		cout<<"Initializing ..."<<endl;
	}
	public:~Safari(){
		cout<<"Deleting..."<<endl;
	}
};
void Get(Safari s){
	cout<<"Enter two Fucking Numbers"<<endl;
	cin>>s.L>>s.W;
	s.compute(s.L,s.W);
}
int main(){
	Safari sa;
	Get(sa);
	return 0;
}
