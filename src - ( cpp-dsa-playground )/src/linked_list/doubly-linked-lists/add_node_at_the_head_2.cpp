
#include <iostream>
using namespace std;

// Step 1: Create the node structure for the list
class Node {
public:
    int data;
    Node* previous_node;
    Node* next;

    Node(int data) {
        this->data = data;
        this->previous_node = nullptr;
        this->next = nullptr;
    }
};

int main() {
    Node* head = nullptr; // Initialize an empty linked list
    Node* traverse = nullptr; // Create a traversal pointer

    // Step 2: Input data for each element and create nodes
    cout << "Enter total number of elements: ";
    int amount_of_elements;
    cin >> amount_of_elements;

    for (int index = 1; index <= amount_of_elements; index++) {
        cout << "Enter data " << index << ": ";
        int input_data;
        cin >> input_data;

        Node* data_initialization_node = new Node(input_data); // Create a new node
        if (head == nullptr) {
            head = data_initialization_node; // Set the head if it's the first node
            traverse = head;
        } else {
            traverse->next = data_initialization_node; // Connect the new node to the list
            data_initialization_node->previous_node = traverse; // Update previous pointer
            traverse = traverse->next; // Move the traversal pointer
        }
    }

    // Step 3: Print the forward linked list
    cout << "Forward linked list: ";
    Node* temp_traverse = head;
    while (temp_traverse != nullptr) {
        cout << temp_traverse->data << " "; // Print the data of the current node
        temp_traverse = temp_traverse->next; // Move to the next node
    }

    // Step 4: Insert a new node at the head
    cout << "\nEnter the data you want to add at the head of the list: ";
    int new_head_data;
    cin >> new_head_data;
    Node* temp = new Node(new_head_data); // Create a new node with the given data
    temp->next = head; // Set the next pointer of the new node to the current head
    head->previous_node = temp; // Update the previous pointer of the current head
    head = temp; // Update the head to point to the new node

    // Step 5: Print the updated forward linked list
    cout << "Forward linked list after updating the head: ";
    temp_traverse = head;
    while (temp_traverse != nullptr) {
        cout << temp_traverse->data << " "; // Print the data of the current node
        temp_traverse = temp_traverse->next; // Move to the next node
    }

    return 0;
}