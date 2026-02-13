#include <iostream>
using namespace std;

class class_node {
public:
    int data;
    class_node* next;

    class_node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

void delete_node(class_node* head) {
    if (!head || !head->next) {
        cout << "Cannot delete. Invalid class_node or last class_node." << endl;
        return;
    }

    class_node* temp = head->next;
    head->next = temp->next;
    delete temp;
}

int main() {
    class_node* head = new class_node(1);
    head->next = new class_node(2);
    head->next->next = new class_node(3);

    cout << "Original list:" << endl;
    cout << head->data << " -> " << head->next->data << " -> " << head->next->next->data << " -> nullptr" << endl;

    // Delete the second class_node (with value 2)
    delete_node(head);

    cout << "List after deletion:" << endl;
    cout << head->data << " -> " << head->next->data << " -> nullptr" << endl;

    return 0;
}
