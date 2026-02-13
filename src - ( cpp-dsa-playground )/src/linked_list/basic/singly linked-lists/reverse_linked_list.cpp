#include<iostream> // Include the iostream library for input/output operations
#include<conio.h> // Include the conio.h library for console input/output operations
using namespace std; // Use the standard namespace

// Define a structure for a node in the linked list
struct node{
  int data; // The data contained in the node
  node *next; // Pointer to the next node in the list
  // Constructor for the node structure

  node(int data)
      {
        this -> data = data; // Assign the provided data to the node's data
    
        this -> next = nullptr; // Initialize the next pointer to null
      }
};

int main(){
  // Create a new linked list with three nodes
  node *head = new node(1);
  head ->next = new node(2);
  head ->next ->next = new node(3);

  // Print the original linked list
  cout <<"Original linked list: " ;
   cout << head -> data << " " << head -> next -> data << " " << head -> next -> next -> data << endl;

  // Initialize pointers for reversing the linked list
            
                 node *preview = nullptr;
                 node *current = head;
                
  // Reverse the linked list
  while (head != nullptr){
    current = head -> next; // Move the current pointer to the next node
      head ->next = preview; // Reverse the link of the current node
        preview = head; // Move the preview pointer to the current node
          head = current; // Move the head pointer to the next node
  }

  // Print the reversed linked list
  cout <<"Reversed linked list: " ;
  cout << preview-> data << " " << preview-> next -> data << " " << preview-> next -> next -> data << endl;

  getch(); // Wait for a key press before closing the program
}