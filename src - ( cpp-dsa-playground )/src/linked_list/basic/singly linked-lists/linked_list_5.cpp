#include<conio.h> // Include conio.h library for console input/output functions
#include<iostream> // Include iostream library for standard input/output streams
using namespace std; // Use the standard namespace

// Define a struct node
struct node{
  int data; // Data of the node
  node *next; // Pointer to the next node

  // Constructor for the node
  node(int data){
    this -> data = data; // Initialize data
    this ->next = nullptr; // Initialize next as null
  }
};

int main(){
 // Create a new linked list with 3 nodes
 node *head = new node(1); // Head node with data = 1
 head ->next = new node(2); // Second node with data = 2
 head ->next-> next = new node(3); // Third node with data = 3

 // Print the original linked list
 cout <<"Original linked-list :";
 cout <<head-> data <<" "<< head->next-> data <<" " << head -> next -> next -> data << endl;

 // Reverse the linked list
 node *preview = nullptr; // Initialize previous node as null
 node *current = head; // Initialize current node as head
 while(current != nullptr){
  current = head->next; // Move the current node to the next node
  head -> next = preview; // Reverse the link
  preview = head; // Move the previous node to the current node
  head = current; // Move the head node to the current node
 }

 // Print the reversed linked list
 cout <<"Reversed linked-list :";
 cout <<preview-> data <<" "<< preview->next-> data <<" " << preview -> next -> next -> data << endl;

 getch(); // Wait for a character input
}
