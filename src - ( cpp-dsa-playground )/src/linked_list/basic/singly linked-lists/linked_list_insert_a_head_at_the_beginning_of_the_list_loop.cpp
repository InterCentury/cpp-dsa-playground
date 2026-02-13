#include <iostream>
using namespace std;

// Define a struct named "Node" to represent a node in a linked list
struct Node {
    int data;  // Data stored in the node
    Node* next;  // Pointer to the next node in the linked list

    // Constructor to initialize a new node with given data
    Node(int data) {
        this->data = data;
        this->next = nullptr;  // Initialize next pointer to null
    }
};

int main() {
    Node* head = new Node(2);  // Create the head node with data 2
    head->next = new Node(3);  // Create the next node with data 3
    head->next->next = new Node(4);  // Create the next node with data 4

    // Print the data of each node before inserting at the head of the list
    cout << "Before inserting data at the head of the list:" << endl;
    cout << "Node 1: " << head->data << endl;
    cout << "Node 2: " << head->next->data << endl;
    cout << "Node 3: " << head->next->next->data << endl;

    // Ask user for total amount of values
    cout << "Enter the total number of values that you want to add in the front: ";
    int total_num;
    cin >> total_num;
    // Using a loop to take input for each value
    for (int i = 0; i < total_num; i++) {
        cout << "Enter the value " << i << ": ";
        int user_input;
        cin >> user_input;

        // Create a new node and add it at the start of the linked list
        Node* ptr = new Node(user_input);
        ptr->next = head;
        head = ptr;
    }
   
    // Print the data of each node after inserting at the head of the list
    cout << "After inserting data at the head of the list:" << endl;
    Node* current = head;  // Start with the head of the list
   
    // Iterate through the linked list until the end is reached
    while (current != nullptr) {
       cout << "Node: " << current->data << endl;  // Output the data of the current node
       current = current->next;  // Move to the next node in the list
     }
   
    return 0;
}
