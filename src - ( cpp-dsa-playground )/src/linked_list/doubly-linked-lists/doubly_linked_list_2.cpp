#include<iostream> //* Include the iostream library for input/output operations
using namespace std; //* Use the standard namespace

//* Define a class named 'node'
class node {
public:
    node *previous; //* Pointer to the previous node
    int data; //* Integer data stored in the node
    node *next; //* Pointer to the next node

    //* Constructor for the node class
    node(int data) {
        this->previous = nullptr; //* Initialize the previous pointer to nullptr
        this->data = data; //* Set the data of the node
        this->next = nullptr; //* Initialize the next pointer to nullptr
    }
};

//* Main function
int main() {
    //* Create nodes
    node *node1 = new node(1); //* Create a new node with data 1
    node *node2 = new node(2); //* Create a new node with data 2
    node *node3 = new node(3); //* Create a new node with data 3
    node *node4 = new node(4); //* Create a new node with data 4

    //* Link nodes
    node1->next = node2; //* Link node1 to node2
    node2->previous = node1; //* Link node2 back to node1

    node2->next = node3; //* Link node2 to node3
    node3->previous = node2; //* Link node3 back to node2

    node3->next = node4; //* Link node3 to node4
    node4->previous = node3; //* Link node4 back to node3

    //* Print the list in forward direction
    cout << "Forward: ";
    node *temp = node1; //* Start from the first node
    while(temp != nullptr) { //* While the current node is not null
        cout << temp->data << " "; //* Print the data of the current node
        temp = temp->next; //* Move to the next node
    }

    //* Print the list in reverse direction
    cout << "\nReverse: ";
    temp = node4; //* Start from the last node
    while(temp != nullptr) { //* While the current node is not null
        cout << temp->data << " "; //* Print the data of the current node
        temp = temp->previous; //* Move to the previous node
    }

    return 0; //* Return 0 indicating successful execution
}