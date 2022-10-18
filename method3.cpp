#include<iostream>
#include<math.h>
using namespace std;
class METHOD3{
	private: float x,e;
	public: void Get(){
		cout<<"Enter the base"<<endl;
		cin>>x;
		cout<<"Enter the exponent"<<endl;
		cin>>e;
		cout<<x<<"^"<<e<<"="<<pow(x,e)<<endl;
	}
};
int main(){
	METHOD3 ME;
	ME.Get();
	return 0;
}
