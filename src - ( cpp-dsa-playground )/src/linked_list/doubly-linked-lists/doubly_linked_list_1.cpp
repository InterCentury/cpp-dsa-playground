#include<iostream> //& Include the iostream library for input/output operations
using namespace std; //& Use the standard namespace

//& Define a class named 'node'
class node {
public:
    node *previous; //& Pointer to the previous node
    int data; //& Integer data stored in the node
    node *next; //& Pointer to the next node

    //& Constructor for the node class
    node(int data) {
        this->previous = nullptr; //& Initialize the previous pointer to nullptr
        this->data = data; //& Set the data of the node
        this->next = nullptr; //& Initialize the next pointer to nullptr
    }
};

//& Main function
int main() {
   
   node *head= new node(1); //& Create a new node with data 1 and assign it to head
   head -> next = new node(2); //& Create a new node with data 2 and link it to head
   head -> next -> previous = head; //& Set the previous pointer of the second node to head
   
   head -> next -> next = new node(3); //& Create a new node with data 3 and link it to the second node
   head -> next -> next -> previous = head -> next; //& Set the previous pointer of the third node to the second node

   head -> next -> next -> next = new node(4); //& Create a new node with data 4 and link it to the third node
   head -> next -> next -> next -> previous = head -> next -> next; //& Set the previous pointer of the fourth node to the third node

   //& Print the list in forward direction
    cout << "Forward: ";
    node *temp = head; //& Start from the head node
    while(temp != nullptr) { //& While the current node is not null
        cout << temp->data << " "; //& Print the data of the current node
        temp = temp->next; //& Move to the next node
    }

    //& Print the list in reverse direction
    cout << "\nReverse: ";
    temp = head->next->next->next; //& Start from the last node
    while(temp != nullptr) { //& While the current node is not null
        cout << temp->data << " "; //& Print the data of the current node
        temp = temp->previous; //& Move to the previous node
    }
    return 0; //& Return 0 indicating successful execution
}
