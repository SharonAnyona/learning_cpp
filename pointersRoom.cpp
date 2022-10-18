#include<iostream>

using namespace std;
class room{
	private: float size;
	public: void Get(){
		cout<<"Enter size of teh room"<<endl;
		cin>>size;
		Modify(size);
	}
	public:void Modify(float s){
		float *p;
		     p=&s
		cout<<"Enter some value to modify the size"<<endl;
		cin>>*p;
		cout<<"the room size is"<<0<<endl;     	
	}
	
};
int main(){
	room r;
	r.Get();
	return;
	}
