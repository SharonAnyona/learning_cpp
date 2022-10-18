#include<iostream>
#include<string>
using namespace std;
class Arectangele{
	private:int width;
           	int lenth;
           	int area;
    public:void Get(){
    	cout<<"enter the width:"<<endl;
    	cin>>width;
    	cout<<"enter the length:"<<endl;
    	cin>>lenth;
    	area=lenth*width;
    	cout<<"area is: "<<area <<endl;
	}     	
    
};
int main(){
    Arectangele A;
    A.Get();
	return 0;
}
