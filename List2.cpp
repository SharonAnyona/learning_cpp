#include<iostream>
#include<list>
#include<string>
using namespace std;
public:void print(list <int> & mylist;int index){
    cout << "The list elements stored at the index " <<index << ": \n";
    for (auto element : mylist) 
    {
        cout << element << '\n';
    }
    cout << '\n';
}
void print(list<int>* myContainer, int n)
{
    cout << "myContainer elements:\n\n";
    for (int i = 0; i < n; i++) 
    {
        print(myContainer[i], i);
    }
}
int main()
{
    list<int> myContainer[3];
    myContainer[0].push_front(5);
    myContainer[0].push_back(10);
    myContainer[0].push_front(15);
    myContainer[0].push_back(20);
  
    myContainer[1].push_front(30);
    myContainer[1].push_back(35);
    myContainer[1].push_front(40);
    myContainer[1].push_back(45);
  
    myContainer[2].push_front(50);
    myContainer[2].push_back(55);
    myContainer[2].push_front(60);
    myContainer[2].push_back(65);
  
    print(myContainer, 3);
  
    return 0;
}


