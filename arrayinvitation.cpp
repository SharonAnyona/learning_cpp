#include<iostream>
#include <string.h>
using namespace  std;
int main(){
	char arr [6][20]={"programmer","developer","engineer","students","teacher","profesor"};
	char name[25];
	int found=0;
	cout<<"who are you?";
	cin>>name;
	for( int i=0; i<6; i++)
	   {
	   if (!strcmp(name, arr[i]))
		{
			cout<<"\n congratulations!";
			cout<<"\n you are invited from codescraker.com";
			found=1;
			break;
		}else found++;
	}
	{
			if (found !=1)
			cout<< "\n sorry!\n	you are not invited";
			cout<<endl;
			return 0;
			
		}
}
