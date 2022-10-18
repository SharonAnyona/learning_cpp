#include <iostream>
using namespace std;
class Exam {
	private:int S[10],i;
			char T[10];
	public : void Get(){
		for(i=0;i<10;i++){
			cout<<"Enter element at "<<i<<endl;
			cin>>S[i];
			
		}
		Award(S);	
	}
	public: void Award(int X[]){
		cout<<"Grading the students"<<endl;
		for(i=0;i<10;i++){
			if (X[i]>=0 && X[i]<=39){
				T[i]='E';
			}
			else if(X[i]>=40 && X[i]<=49){
				T[i]='D';
			}
			else if (X[i]>=50 && X[i]<=59){
				T[i]='C';
			}
			else if (X[i]>=60 && X[i]<=69){
				T[i]='B';
			}
			else if (X[i]>=70 && X[i]<=100){
				T[i]='A';
			}
			else {
				T[i]='F';
			}
		}
		cout<<"Performance"<<endl;
		for(i=0;i<=9;i++){
			cout<<S[i]<<":\t"<<T[i]<<endl;
		}
	}
};
int main(){
	Exam Ex;
	Ex.Get();
	return 0;
}
