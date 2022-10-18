#include<iostream>
#include<string>
using namespace std;
class Elevator{
	private:
	int response;
	public:
		void Read (){
		cout<<"enter the floor numberr"<<endl;
		cin>>response;
		Display(response);
	}
	public:
	void Display(int r){
		switch(r){
			case 0:
				cout<<"Ground floor"<<endl;
				break;
			case 1:
				cout<<"first floor"<<endl;
				break;
			case 2:
				cout<<"second floor"<<endl;
				break;
			case 3:
			    cout<<"third floor"<<endl;
				break;
			case 4:
			    cout<<"fourth floor"<<endl;
			    break;	
			default:
			cout<<"invalid input please try again"<<endl;    
		}
	}	
};
int main(){
	Elevator e;
	e.Read();
	return 0;
}
