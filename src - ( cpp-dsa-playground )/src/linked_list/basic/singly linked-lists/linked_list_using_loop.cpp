#include<iostream>
using namespace std;

// Define the structure for a node in the linked list
struct Node {
    int data;
    Node* next;
};

int main() {
    int n;
    cout << "Enter the number of elements in the linked list: ";
    cin >> n;

    // Initialize the head of the linked list
    Node* head = nullptr;
    Node* tail = nullptr;

    // Loop to input the elements of the linked list
    for(int i = 0; i < n; i++) {
        int value;
        cout << "Enter value of element " << i+1 << ": ";
        cin >> value;

        // Create a new node
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;

        // If this is the first node, make it the head of the list
        if(i == 0) {
            head = newNode;
            tail = newNode;
        } else {
            // For subsequent nodes, add them to the end of the list
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Print the elements of the linked list
    cout << "Elements of the linked list are: ";
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
