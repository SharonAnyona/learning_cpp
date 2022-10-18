#include<iostream>
#include<math.h>
using namespace std;
class TV{
	protected: int a,b;
	public: void Get(){
		cout<<"Enter quantity and price"<<endl;
		cin>>a>>b;
		calc(a,b);
	}
	public:void calc(int p,int q){
		cout<<"Total price "<<p*q<<endl;	
	}
};
class LG:public TV
{
	public: void Get(){
		cout<<"Enter quantity and price"<<endl;
		cin>>a>>b;
		calc(a,b);
	}
	public:void calc(int x,int y){
		cout<<"sum is:"<<x+y<<endl;
			
	}
};
int main(){
	LG L;
	L.Get();
	return 0;
	
}
