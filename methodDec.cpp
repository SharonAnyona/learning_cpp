#include<iostream>
#include<string>
using namespace std;
class METHOD2{
	private: int a,b;
	public:void Get();
	public:int Add(int x,int y);
	
};
void METHOD2::Get(){
	cout<<"Enter 2 nos"<<endl;
	cin>>b;
	cout<<"sum is:"<<Add(a,b)<<endl;
}int METHOD2::Add(int x,int y){
	return x+y;
}
int main(){
	METHOD2 ME;
	ME.Get();
	return 0;
}
