#include<iostream>
#include<string>

using namespace std;
struct node{
	         int data; 
             node*next; 
             node() 
 
    { 
        data = 0; 
        next = NULL; 
    } 
    // Parameterised Constructor 
    Node(int data) 
    { 
       this->data = data; 
       this->next = NULL; 
    } 
}; 
// Linked list class to 
// implement a linked list. 
class Linkedlist { 
    node*head; 
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

// Function to delete the node at given position 
void Linkedlist::deleteNode(int nodeOffset) 
{ 
    node *temp1 = head, *temp2 = NULL; 
    int ListLen = 0; 
    if (head == NULL) { 
        cout << "List empty." << endl; 
        return ;
    } 
    // Find length of the linked-list. 
    while (temp1 != NULL) { 
        temp1 = temp1->next; 
        ListLen++; 
    } 
    // Check if the position to be deleted is less than the length of the linked list. 
    if (ListLen < nodeOffset) { 
        cout << "Index out of range"
             << endl; 
        return ; 
    } 
    // Declare temp1 
    temp1 = head; 
    // Deleting the head. 
    if (nodeOffset == 1) { 
        // Update head 
        head = head->next; 
        delete temp1; 
        return ; 

    } 
    // Traverse the list to
    // find the node to be deleted. 
    while (nodeOffset-- > 1) { 
        // Update temp2 
        temp2 = temp1; 
        // Update temp1 
        temp1 = temp1->next; 
    } 
    // Change the next pointer 
    // of the previous node. 
    temp2->next = temp1->next; 
    // Delete the node 
    delete temp1; 
}   
// Function to insert a new node. 
 void Linkedlist::insertNode(int data) 
{ 
    // Create the new Node.
    node*temp = new node; //node*tmp = new node;//
    // Assign to head 
    if (head == NULL) { 
        head = temp; 
        return; 
    } 
    // Traverse till end…
    while (temp != NULL) { 
		cout << temp->data << " "; 
        temp = temp->next; 
    } 
    
}   
int printNodeData(struct node *node){
    cout << "key: "<<node->data<< endl;
      cout  << "city: "<<node->data<< endl;
        //<< "county: " << node->country << endl << endl;
}
//int printNodeData(struct node *node){
    //cout << "key: "<<node->data<< endl;
     // cout  << "city: "<<node->data<< endl;
        //<< "county: " << node->country << endl << endl;

// Driver Code 
int main() 
{ 
    
    Linkedlist list; // Inserting nodes 
    list.insertNode(1); 
    list.insertNode(2); 
    list.insertNode(3); 
    list.insertNode(4); 
    cout << "Elements of the list are: ";
    // Print the list 
    
    list.printNodeData(); 
    cout << endl; 
    // Delete node at position 2. 
    list.deleteNode(2); 
    cout << "Elements of the list are: "; 
    list.printNodeData(); 
    cout << endl; 
    return 0;
	
};
int printNodeData(struct node *node){
    cout << "key: "<<node->data<< endl;
      cout  << "city: "<<node->data<< endl;
        //<< "county: " << node->country << endl << endl;
}
