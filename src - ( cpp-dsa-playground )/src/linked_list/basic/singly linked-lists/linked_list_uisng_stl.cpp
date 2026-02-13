#include<iostream>
#include<list> // Include the list library
using namespace std;

int main() {
    // Declare a list of integers
    list<int> linked_list;

    // Add elements to the list
    linked_list.push_back(1);
    linked_list.push_back(2);
    linked_list.push_back(3);

    // Print the elements of the list
    cout << "Original list: ";
    for(int element : linked_list) {
        cout << element << " ";
    }
    cout << endl;

    // Reverse the list
    linked_list.reverse();

    // Print the reversed list
    cout << "Reversed list: ";
    for(int element : linked_list) {
        cout << element << " ";
    }

    return 0;
}
