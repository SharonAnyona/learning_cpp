#include<iostream>
using namespace std;
class caller4{
	private:int Y;
	public:void Get(){
		cout<<"Enter number:"<<endl;
		cin>>Y;
		cout<<Y<<"!="<<Fa(Y)<<endl;
	}
	public:int Fa(int x){
		if (x==0){
			return 1;
		}
		else{
			return x*Fa(x-1);
		}
	}
};
int main(){
	caller4 Ca;
	Ca.Get();
	return 0;
}
