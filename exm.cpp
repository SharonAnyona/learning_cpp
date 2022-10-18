#include<iostream>
#include<string>
using namespace std;
class EXAM{
	private: string exmcode;
	         string xmDescription;
	         int noCandidate;
	         int centersReqd;
	    CALCNTR(){
	    	centersReqd=1;
	    	while(centersReqd<=3){
				centersReqd=noCandidate/100+1;
	         	cout<<"the number of centers are:"<<centersReqd<<endl;
	         	centersReqd++;			}
	    	
			 }
	public:SCHEDULE(){
		cout<<"Enter exmCode"<<endl;
		cin>>exmcode;
		cout<<"Enter xmDescription"<<endl;
		cin>>xmDescription;
		cout<<"Enter noCandidate"<<endl;
		cin>>noCandidate;
		CALCNTR();
		
	}
	public:SHOW(){
		cout<<"show all the details "<<endl;
		cout<<exmcode<<endl;
		cout <<xmDescription<<endl;
		cout<<noCandidate<<endl ;
		cout<<centersReqd<<endl;
	}		 
};
int  main(){
	EXAM E;
	E.SCHEDULE();
	E.SHOW();
	return 0;
}

