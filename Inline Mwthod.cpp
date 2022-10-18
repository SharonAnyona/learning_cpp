#include<iostream>
using namespace std;
class caller2{
	private:int x;
	public:void Get(){
		cout<<"Enter number:"<<endl;
		cin>>x;
		update(x);
	}
	public:inline void update(int a){
		a=a*5;
		cout<<a<<endl;
	}
};
int main(){
	caller2 C;
	C.Get();
	return 0;
}
