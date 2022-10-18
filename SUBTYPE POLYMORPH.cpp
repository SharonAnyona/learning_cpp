#include<iostream>
using namespace std;
class Rectangle{
	protected:float length;
	public:Rectangle(){
		length=4.7;
	}
	public:virtual void print()=0;
};
class Triangle:public Rectangle{
	public:void print(){
		cout<<length<<endl;
	}
};
int main(){
	Rectangle *R;
	Triangle T;
	R= &T;
	R->print();
	return 0;
}
