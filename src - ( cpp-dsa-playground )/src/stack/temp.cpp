#include <iostream>
using namespace std;

const int MAX_SIZE = 5; // Maximum size of the stack

class Stack {
private:
    int top;           // Index of the top element
    int arr[MAX_SIZE]; // Array to store stack elements

public:
    // Constructor to initialize the stack
    Stack() {
        top = -1; // Initialize top to -1 (empty stack)
    }

    // Function to check if the stack is full
    bool isFull() {
        return top == MAX_SIZE - 1; // Stack is full if top is at the last index
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == -1; // Stack is empty if top is -1
    }

    // Function to push an element onto the stack
    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << value << ". Stack is full." << endl;
        } else {
            arr[++top] = value; // Increment top and add the element
            cout << "Pushed " << value << " to the stack." << endl;
        }
    }

    // Function to pop an element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop from an empty stack." << endl;
        } else {
            cout << "Popped " << arr[top--] << " from the stack." << endl; // Decrement top after popping
        }
    }

    // Function to get the top element of the stack (peek)
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty. No top element." << endl;
            return -1; // Return -1 to indicate an empty stack
        }
        return arr[top]; // Return the top element
    }

    // Function to display the stack elements
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack stack;

    // Push elements onto the stack
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50); // Stack is now full
    stack.push(60); // This will cause a stack overflow

    // Display the stack
    stack.display();

    // Peek at the top element
    cout << "Top element: " << stack.peek() << endl;

    // Pop elements from the stack
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop(); // Stack is now empty
    stack.pop(); // This will cause a stack underflow

    // Display the stack
    stack.display();

    return 0;
}
