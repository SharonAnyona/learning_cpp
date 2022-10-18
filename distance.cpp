#include<iostream>
#include<string>
using namespace std;
 const float s=30e+08;
class  light{
	private: int time;
	public: void calc(){
		cout<<"enter the time taken:"<<endl;
		cin>>time;
		 float dis;
	    dis=s*time;
		cout<<"distance is:"<<dis<<endl;	
	}
};
int main(){
	light l;
	l.calc();
	return 0;
}
