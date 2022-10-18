#include<iostream>
using namespace std;
struct node
{
	int data;
	node*next;
};
class linked_list
{
private:
	node *head,*tail;
public:
	linked_list()
	{
		head = NULL;
		tail = NULL;
	}
	
	void add_node(int n)

	{
		node*tmp = new node;
		tmp->data =n;
		tmp->next = NULL;
		if(head == NULL)
		{
			head = tmp;
			tail = tmp;
			}	
			else{
				tail->next =tmp;
				tail =tail->next;
			}
		}
		
		public: 
    // Default constructor 
    Linkedlist() { head = NULL; } 
    // Function to insert a node at the end of the  linked list. 
    void insertNode(int); 
    // Function to print the linked list. 
    void printNodeData(); 
    // Function to delete the node at given position 
    void deleteNode(int); 
};
int main(){

	linked_list list;
	list.add_node(1);
	list.add_node(2);
	cout << "Elements of the list are: ";
    // Print the list 
    //list.printNodeData(); 
    cout << endl; 
    // Delete node at position 2. 
    //list.deleteNode(2); 
    cout << "Elements of the list are: "; 
   // list.printNodeData(); 
    cout << endl;
return 0;
}
