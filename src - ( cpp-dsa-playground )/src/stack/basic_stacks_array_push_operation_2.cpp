#include<iostream> // Include the standard input-output stream library
#include<conio.h> // Include the console input-output library
#define max_range 5 // Define a constant for the maximum range of the stack
using namespace std; // Use the standard namespace

// Declare some global variables to make the task easier
int global_stacks_array[max_range]; // Array to hold stack elements
int stacks_top = -1; // Variable to track the top of the stack
int overflow_count = 0; // Counter to track the number of overflows

// Define a function to push data onto the stack
void push_data_function(int passed_data) {
    if (stacks_top == max_range - 1) { // Check if the stack is full
        
        return; // Exit the function
    }
    // Increment the top's value
    stacks_top = stacks_top + 1;
    // Implement the passed data to the stack
    global_stacks_array[stacks_top] = passed_data;
}

int main() {
    push_data_function(2);  // Push 2 onto the stack
    push_data_function(4);  // Push 4 onto the stack
    push_data_function(6);  // Push 6 onto the stack
    push_data_function(8);  // Push 8 onto the stack
    push_data_function(10); // Push 10 onto the stack
    push_data_function(10); // Attempt to push another 10 onto the stack
    push_data_function(10); // Attempt to push another 10 onto the stack
    // Print all the data of the stack using a for loop
    for (int loop = 0; loop < max_range; loop++) {
        cout << global_stacks_array[loop] << endl; // Print each element of the stack
    }

    // Print the overflow messages
    for (int i = 0; i < overflow_count; i++) {
        cout << "Stack overflow" << endl; // Print stack overflow message
    }

    getch(); // Wait for a key press
}