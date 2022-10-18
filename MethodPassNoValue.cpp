#include<iostream>
using namespace std;
class caller1{
	public:void Greet(){
		cout<<"How are you doing?"<<endl;
		Answer();
	}
	public:void Answer(){
		cout<<"Am Fine"<<endl;
	}
};
int main(){
	caller1 C;
	C.Greet();
	return 0;
}
