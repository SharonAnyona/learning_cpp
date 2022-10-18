#include<iostream>
# include<string>
# include<queue>

using namespace std;
class Intlist
{
    int top;
    public:
    int a[10];  
    Stack()
    {
        top = -1;
    }
    void push(int x);
    int pop();
    void isEmpty();
};
void Intlist::push(int x)
{
    if(top >= 10)
    {
        cout << "Stack Overflow \n";
    }
    else
    {
        a[++top] = x;
        cout << "Element Inserted \n";
    }
}
int Intlist::pop()
{
    if(top < 0)
    {
        cout << "Stack Underflow \n";
        return 0;
    }
    else
    {
        int d = a[top--];
        return d;
    }
}
void Intlist::isEmpty()
{
    if(top < 0)
    {
        cout << "Stack is empty \n";
    }
    else
    {
        cout << "Stack is not empty \n";
    
    }
}

int main() {
  queue<string> names;
  names.push("sharon");
  names.push("Kevin");
  cout << "Queue: ";
  while(!names.empty()) {
    cout << names.front() << ", ";
    names.pop();
  }

    cout << endl;
    Intlist It;
    It.push(10);
    It.push(100);
}
