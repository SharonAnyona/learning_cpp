//make it input restricted.
#include<iostream>
#include<string>
using namespace std;
int queue[100], n=100, front = -1, rear =-1;
int size;
void Insert(){
	int val;
	if(rear == n -1)
	cout<<"queue overflow"<<endl;
	else{
		if (front == -1)
		front =0;
		cout<<"insert the element in queue:"<<endl;
		cin>>val;
		rear++;
		queue[rear]=val;
	}
}//change the delete module.
void deleterear() {
  if (front == rear) {
    front = -1;
    rear = -1;
  } else if (rear == 0)
    rear = size - 1;
  else
    rear = rear - 1;
}
/*void delete(){
	if(front == -1 || front > rear){
		cout<<"queue underflow element";
		return;
	}else{
		cout"Elements deleted from queue is:"<<queue[front]<<endl;
		front++;;
	
}
}*/

void display(){
	if(front == -1)
	cout<<"queue is empty:"<<endl;
	else{
	cout<<"queue elements are:";
	for(int i=front;i<=rear;i++)
	cout<<queue[i]<<"";
	cout<<endl;
}
}
int main(){
	int ch;
	cout<<"1) insert element to queue"<<endl;
	cout<<"2) Delete element from queue"<<endl;
	cout<<"3) Display element of queue"<<endl;
	cout<<"4) Exit"<<endl;
	do{
		cout<<"enter your choice:"<<endl;
		cin>>ch;
		switch(ch){
			case 1:Insert();
			break;
		//	case 2:delete();
		//	break;
			case 3:deleterear();
			break;
			case 4:display();
			break;
			case 5:cout<<"Exit"<<endl;
			break;
			default: cout<<"invalid choice"<<endl;
		}
	}while(ch!=4);
	return 0;
	
}
