#include<iostream>
#include<string>
using namespace std;
const float c=30E+08;
class SPEED{
	private:
		float time;
	public:
	     void get(){
	     	cout<<"enter the time taken by the particle"<<endl;
	     	cin>>time;
	     	cout<<"the distance covered is"<< calc (time);
			 }
	public:
	      float calc(float t){
	      	float d;
	      	d=c*t; 
	      	return d;
		  }		 
};
int main(){
	SPEED sp;
	sp.get();
	return 0;
	}
