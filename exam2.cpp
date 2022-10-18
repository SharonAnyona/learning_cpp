#include<iostream>
#include<string>
using namespace std;
class exam{
	private: int S[10],i;
	         int T[10];
    public : void Get(){
		for(i=0;i<10;i++){
			cout<<"Enter element at "<<i<<endl;
			cin>>S[i];
		}
		
		}
	public: void Get(int x[]){
		for(i=0;i<=10;i++){
			if(x[i]>=0 && x[i]<=39){
		    	cout<<"grade is:"<<endl;
			      T[i]='e';
		     }
			else if(x[i]>=40&& i<=49){
			  cout<<"grade is:"<<endl;
			     T[i]='d';
		     }
			else if(x[i]>=50 && i<=59){
			     cout<<"grade is:"<<endl;
			      T[i]='c';
		     }
			else if(x[i]>=60 && i<=99){
			     cout<<"grade is:"<<endl;
			     T[i]='b';
		     }
			else{
				cout<<"invalid"<<endl;
			}
			
		        
		}
		
	}
};
int main(){
	exam E;
	E.Get();
	return 0;
}
