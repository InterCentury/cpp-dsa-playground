
#include<iostream>
//* Use the standard namespace to avoid typing 'std::' before standard functions
using namespace std;

//* Define a class named Node to represent each node in the linked list
class Node{
public:
    int data;       //* Integer variable to store the data of the node
    Node* next;     //* Pointer to the next node in the linked list

    //* Constructor that initializes a node with the given data
    Node(int data) { 
        this->data = data; //* Assign the provided data to the node's data
        this->next = nullptr; //* Initialize the next pointer to nullptr (end of list)
    }
};

//* The main function where the program execution begins
int main() {
    //* Create the first node (head of the list) with data value 1
    Node* head = new Node(1);
    //* Link a new node with data value 2 to the next of the head node
    head->next = new Node(2);
    //* Link a new node with data value 3 to the next of the second node
    head->next->next = new Node(3);
  
    //!process of delete head / 2st node of the list

    Node *temp = head;
    head = head -> next;
    delete temp;
      
    //* Print the data of the head node
    cout << head ->data << endl;  //* Output: 1
    //* Print the data of the second node
    cout << head -> next -> data<< endl;  //* Output: 2

    //* Return 0 to indicate successful completion of the program
    return 0;
}