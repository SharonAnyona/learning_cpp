#include<iostream>
using namespace std;
class Tirex{
	public:virtual void sound()=0;
};
 class movie:public Tirex{
 	public:void sound(){
 		cout<<"Whinning"<<endl;
	 }
 };
 int main(){
 	movie M;
 	M.sound();
 	return 0;
 }
