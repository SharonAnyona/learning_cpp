#include<iostream>
#include<iterator>
#include<list>b
using namespace std;
void showlist(list<int>g){
	list<int>:iterator it;
	for(it=g.begin();it!=g.end();it++)
	cout<<'\t'<<*it;
	cout<<'\n';
     }
int main()
{
	list<int>gqlist1 gqlist2;
	for(int i=0;i<10;i++);
	{
		gqlist1.push_back(1*2);
		gqlist2.push_front(1*3);
	}
	cout<<"\n list1(gqlist1) is:";
	showlist(gqlist1;);
	cout<<"\n list2(gqlist2) is:";
	showlist(gqlist2);
	cout<<"nglist.front():"<<gqlist1.front()<<endl;
	cout<<"nglist.back():"<<gqlist1.back()<<endl;
	cout<<"ngqlist.pop_front();";
	gqlist1.front();
	showlist(gqlist1);
	cout<<"\n gqlist2.pop_back()";
	gqlist2.pop_back();
	showlist(gqlist2);
	cout<<"gqlist1.reverse():";
	gqlist1.reverse();
	showlist(gqlist1);
	cout<<"gqlist2.sort():";
	gqlist2.sort();
	showlist(gqlist2);
	return 0;
	
};
