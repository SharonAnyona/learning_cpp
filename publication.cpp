#include<iostream>
#include<string>
using namespace std;
class publication{
	string title;
	float price;
	public:getdata(){
		cout"Enter book title"<<endl;
		cin>>title;
		cout<<"Enter price"<<endl;
		cin>>price;
	    putdata(){
			cout<<title<<price<<endl;
		}
	
};
class book:public publication{
	int	pageCount ;
	getdata();
	putdata();
};
class tape: public publication{
	float playingTime; 
	getdata();
	putdata();
};
int main(){
	publication p;
	p.getdata();
    p.putdata();
	return 0;
}

