//* Include the iostream library for input/output operations
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

    //* Create a new node with data value 7 to be inserted
    Node *ptr_data = new Node(7);
    //* Declare a pointer to traverse the list, starting from the head
    Node *ptr = head;
    //* Move the traversal pointer to the second node
    ptr = ptr -> next;
    
    //* Link the new node (with data 7) after the second node
    ptr_data -> next = ptr -> next;
    //* Update the second node's next pointer to point to the new node
    ptr -> next = ptr_data;
    
    //* Print the data of the head node
    cout << head ->data << endl;  //* Output: 1
    //* Print the data of the second node
    cout << head -> next -> data<< endl;  //* Output: 2
    //* Print the data of the newly inserted node
    cout << head -> next -> next -> data<< endl;  //* Output: 7
    //* Print the data of the third node (now the fourth node)
    cout << head -> next -> next -> next -> data<< endl;  //* Output: 3

    //* Return 0 to indicate successful completion of the program
    return 0;
}