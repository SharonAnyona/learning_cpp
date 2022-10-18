#include<iostream>
using namespace std;
class caller3{
	private:int x;
	public:void Get(){
		cout<<"Enter number:"<<endl;
		cin>>x;
		update(&x);
	}
	public:void update(int *a){
		*a=*a*5;
		cout<<*a<<endl;
	}
};
int main(){
	caller3 C;
	C.Get();
	return 0;
}
