#include<iostream>
#include<string>
using namespace  std;
class Survey{
	private:
		int response;
	public:
	     void Get(){
	     	cout<<"Enter your response"<<endl;
	     	cin>>response;
	     	reply(response);
	     	 }
		void reply(int r){
			if(r>=0 && r<=4){
				cout<<"strongly agree"<<endl;
			}
			else if(r>=5 && r<=7){
				cout<<"agree"<<endl;
				}
			else if(r>=8 && r<=10){
				cout<<"strongly disagree"<<endl;
			}
			else if(r>=11 && r<=13){
				cout<<"disagree"<<endl;
			}	
			else{
				cout<<"Wrong response"<<endl;
			}
		}	  	
};
int main(){
	Survey s;
	s.Get();
	return 0;
	
}
