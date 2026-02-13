#include <iostream>
using namespace std;// Define a struct named "Node" to represent a node in a linked list

// Define a struct named "Node" to represent a node in a linked list
struct Node {
    public:
        int data;  // Data stored in the node
        Node* next;  // Pointer to the next node in the linked list

        // Constructor to initialize a new node with given data
        Node(int data) {
            this->data = data;
            this->next = nullptr;  // Initialize next pointer to null
        }
};

int main() {
    // Create the head node with data 1
    Node* head = new Node(1);
    // Create the next node with data 2
    head->next = new Node(2);
    // Create the next node with data 3
    head->next->next = new Node(3);

    // Create a new node that we will add at the end of the linked list
    Node* temp = new Node(4);

    // Traverse to the last node in the linked list
    Node* ptr = head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    //Add the new node to the end
    ptr->next = temp;
    temp->next = nullptr;

    // Print the data of each node
    cout << "Data in the linked list:" << endl;
    cout << "Node 1: " << head->data << endl;
    cout << "Node 2: " << head->next->data << endl;
    cout << "Node 3: " << head->next->next->data << endl;
    cout << "Node 4: " << head->next->next->next->data << endl;

    return 0;
}