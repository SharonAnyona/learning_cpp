#include<iostream>
#include<string>
using namespace std;
class circle{
            private:int radius;
                    float pie=3.142;
                    float area;
            public: void Get(){
            	cout<<"Enter the radious of the circle:"<<endl;
            	cin>>radius;
            	area=pie*radius*radius;
            	cout<<"area is"<<area<<endl;
            	}    
};
int main(){ y7
circle c;
c.Get();
return 0;
}			
