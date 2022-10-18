#include<iostream>
#include<string>
using namespace std;
struct plot{
	private:
		int plotNo;
		float size,price;
		string location;
	public:void Get(){
		cout<<"please enter PlotNo "<<endl;
		cin>>plotNo;
		cout<<"please enter the size and price"<<endl;
		cin>>size>>price;
		cout<<"Enter the location"<<endl;
		cin>>location;
		display(plotNo,size,price,location);
     }
	public: void display(int p,float s,float pr,string st){
	
	cout<<"Details"<<endl;
	cout<<p<<":"<<s<<":"<<pr<<":"<<st<<":"<<endl;
	}

	
};
int main(){
		plot PL;
		PL.Get();
		return 0;
	}	
		
