#include <iostream>
using namespace std;

// ANSI escape codes for colorful output
#define COLOR_RED "\033[31m"
#define COLOR_GREEN "\033[32m"
#define COLOR_YELLOW "\033[33m"
#define COLOR_BLUE "\033[34m"
#define COLOR_RESET "\033[0m"

class Stack {
private:
    int *stackArray; // Dynamic array to store stack elements
    int top;         // Index of the top element
    int capacity;    // Maximum capacity of the stack

public:
    // Constructor to initialize the stack
    Stack(int size) {
        capacity = size;
        stackArray = new int[capacity];
        top = -1; // Stack is initially empty
    }

    // Destructor to free dynamically allocated memory
    ~Stack() {
        delete[] stackArray;
    }

    // Push an element onto the stack
    void push(int data) {
        if (isFull()) {
            cout << COLOR_RED << "Stack Overflow! Cannot push " << data << ". Stack is full." << COLOR_RESET << endl;
        } else {
            stackArray[++top] = data;
            cout << COLOR_GREEN << "Pushed " << data << " onto the stack." << COLOR_RESET << endl;
        }
    }

    // Pop an element from the stack
    int pop() {
        if (isEmpty()) {
            cout << COLOR_RED << "Stack Underflow! Stack is empty." << COLOR_RESET << endl;
            return -1; // Return -1 to indicate underflow
        } else {
            int poppedData = stackArray[top--];
            cout << COLOR_YELLOW << "Popped " << poppedData << " from the stack." << COLOR_RESET << endl;
            return poppedData;
        }
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Check if the stack is full
    bool isFull() {
        return top == capacity - 1;
    }

    // Display the stack elements
    void display() {
        if (isEmpty()) {
            cout << COLOR_RED << "Stack is empty." << COLOR_RESET << endl;
        } else {
            cout << COLOR_BLUE << "Elements in the stack (top to bottom):" << COLOR_RESET << endl;
            for (int i = top; i >= 0; i--) {
                cout << stackArray[i] << endl;
            }
        }
    }
};

// Function to print popped elements
void printPoppedElements(int poppedArray[], int count) {
    cout << COLOR_BLUE << "\nPopped elements:" << COLOR_RESET << endl;
    for (int i = 0; i < count; i++) {
        cout << poppedArray[i] << endl;
    }
}

int main() {
    // Create a stack with a maximum capacity of 5
    Stack myStack(5);

    cout << COLOR_BLUE << "Welcome to the Modern Stack Program!" << COLOR_RESET << endl;

    // Push elements onto the stack
    myStack.push(6);
    myStack.push(5);
    myStack.push(3);
    myStack.push(5);
    myStack.push(8);
    myStack.push(9); // This will cause a stack overflow

    // Display the stack
    cout << COLOR_BLUE << "\nInitial stack:" << COLOR_RESET << endl;
    myStack.display();

    // Pop elements from the stack
    int poppedElements[5];
    int popCount = 0;

    poppedElements[popCount++] = myStack.pop();
    poppedElements[popCount++] = myStack.pop();
    poppedElements[popCount++] = myStack.pop();

    // Print the popped elements
    printPoppedElements(poppedElements, popCount);

    // Display the stack after popping
    cout << COLOR_BLUE << "\nStack after popping:" << COLOR_RESET << endl;
    myStack.display();

    return 0;
}