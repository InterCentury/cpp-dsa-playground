#include <iostream>
using namespace std;

#define MAX_RANGE 5 // Define the max range of our stack

// Global variables
int global_stacks_array[MAX_RANGE];
int stacks_top = -1;

// Function to push data onto the stack
void push_operation(int data) {
    if (stacks_top == MAX_RANGE - 1) {
        cout << "Stack Overflow! Cannot push " << data << ". Stack is full." << endl;
    } else {
        global_stacks_array[++stacks_top] = data; // Increment top and add data
        cout << "Pushed " << data << " onto the stack." << endl;
    }
}
// Function to pop data from the stack
int pop_operation() {
    if (stacks_top == -1) {
        cout << "Stack Underflow! Stack is empty." << endl;
        return -1; // Return -1 to indicate underflow
    } else {
        int popped_data = global_stacks_array[stacks_top--]; // Decrement top and return data
        cout << "Popped " << popped_data << " from the stack." << endl;
        return popped_data;
    }
}
// Function to display the stack
void display_stack() {
    if (stacks_top == -1) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Elements in the stack (top to bottom):" << endl;
        for (int i = stacks_top; i >= 0; i--) {
            cout << global_stacks_array[i] << endl;
        }
    }
}
// Function to print elements of an array
void print_array(int arr[], int size) {
    cout << "Elements in the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    // Push elements onto the stack
    push_operation(6);
    push_operation(5);
    push_operation(3);
    push_operation(5);
    push_operation(8);

    // Display the stack
    cout << "\nInitial stack:" << endl;
    display_stack();

    // Array to store popped elements
    int popped_elements[MAX_RANGE];
    int popped_count = 0; // Counter to track the number of popped elements

    // Pop elements from the stack and store them in the array
    popped_elements[popped_count++] = pop_operation();
    popped_elements[popped_count++] = pop_operation();
    popped_elements[popped_count++] = pop_operation();

    // Print the popped elements using the separate function
    cout << "\nPopped elements:" << endl;
    print_array(popped_elements, popped_count);

    // Display the stack after popping
    cout << "\nStack after popping:" << endl;
    display_stack();

    return 0;
}