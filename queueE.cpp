#include<iostream>


using namespace std;
class random{
	private: int array[100];
	public: void Get(){
    //srand(time(0));
    for(int i = 0; i<=100; i++) 
        cout << "A random number between 1 and 100: " << 1 + (rand() % 100) << endl;
        
        }
};
int main(){
	random r;
	r.Get();
	return 0;
 }
