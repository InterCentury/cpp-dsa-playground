//* Include the iostream library for input/output operations
#include<iostream>

//* Include the conio.h library for console input/output operations
#include<conio.h>

//* Use the standard namespace
using namespace std;

//* Define a class named 'node' to represent each element in the linked list
class node {
public:
    //* Integer data member to store the value
    int data;
    
    //* Pointer to the next node in the linked list
    node *next;

    //* Constructor for the node class to initialize a new node
    node(int data) {
        //* Assign the input data to the node's data member
        this->data = data;
        
        //* Initialize the next pointer to null to signify the end of the list
        this->next = nullptr;
    }
};

//* Function to delete the last node from the linked list
int delete_last_node(node *head) {
    //* Check if the list is empty
    if (head == nullptr) {
        cout << "The list is already empty" << endl;
        //* Return an error code
        return -1;
    }

    //* Traverse the list to find the second-to-last node
    node *previous_last = head;
    while (previous_last->next->next != nullptr) {
        previous_last = previous_last->next;
    }

    //* Delete the last node and update the second-to-last node's next pointer
    delete previous_last->next;
    previous_last->next = nullptr;
    
    //* Return success code
    return 0;
}

//* Main function where the program execution begins
int main() {
    //* Create a linked list with four nodes
    node *head = new node(1); //* First node with data 1
    head->next = new node(2); //* Second node with data 2
    head->next->next = new node(3); //* Third node with data 3
    head->next->next->next = new node(4); //* Fourth node with data 4

    //* Call the function to delete the last node
    delete_last_node(head);

    //* Print the data of the remaining nodes in the linked list
    node *current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
    //* The fourth node has been deleted, so we do not print it

    //* Wait for a key press before closing the console window
    getch();
}
