#include<iostream>
#include<list> // Include the list library
using namespace std;

int main() {
    // Declare a list of integers
    list<int> linked_list;
 
    // Prompt the user to enter the number of elements in the linked list
    cout <<"Enter the range of linked-list :";
    int range_of_list;
    cin >> range_of_list;

    // Loop to input the elements of the linked list
    for (int range = 1 ; range <= range_of_list ; range++){
        cout << "Enter the element of the list :";
        int element_of_list;
        cin >> element_of_list;
        // Add the element to the end of the list
        linked_list.push_back(element_of_list);
    }

    // Print the elements of the list
    cout << "Original list: ";
    for(int element : linked_list) {
        cout << element << endl;
    }
    cout << endl;

    // Reverse the order of the elements in the list
    linked_list.reverse();

    // Print the elements of the reversed list
    cout << "Reversed list: ";
    for(int element : linked_list) {
        cout << element << endl;
    }

    return 0;
}
