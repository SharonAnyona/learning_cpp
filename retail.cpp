#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class product{
	private: int code;
	         string description;
	         double unitPrice;
	         double totalP;
	         double const VAT =0.16;
	         int num ;
	         
	public: void get(){
	///	num = 1;
	//	while(num<=2 ){
			cout<<"enter the product code"<<endl;
		     cin>>code;
		     cout<<"enter the product description "<<endl;
		     cin>> description;
		     cout<<"enter the product unitPrice"<<endl;
		     cin>>unitPrice;
			  }
	    	//num++;
			//if (num>=10) {
			 //cout<<"do you want to stop the program press 0"<<endl;
		    //else {
		    	 ///cout<<"press zero"<<endl;
		    	// break;
		   // }
		 
        	//2
			//}

	public: void price(){
		totalP= unitPrice*VAT;
		cout<<"The product price is:" <<totalP<<endl;
	}       

};
int main(){
product p;
p.get();
p.price();
return 0;
}

