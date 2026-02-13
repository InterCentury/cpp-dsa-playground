#include<iostream> //& Include the iostream library for input/output operations
#include<conio.h> //& Include the conio.h library for console input/output operations
using namespace std; //& Use the standard namespace

//& Define a class named 'node'
class node{
  public: //& Public members of the class
  int data; //& Integer data member
  node *next; //& Pointer to the next node

  //& Constructor for the node class
  node(int data){
  this -> data = data; //& Assign the input data to the node's data
  this -> next = nullptr; //& Initialize the next pointer to null
  }
};

//& Main function
int main(){
node *head = new node(1); //& Create a new node with data 1 and assign it to head
head -> next = new node(2); //& Create a new node with data 2 and link it to head
head -> next -> next = new node(3); //& Create a new node with data 3 and link it to the second node
head -> next -> next -> next = new node(4); //& Create a new node with data 4 and link it to the third node

node *previous_last = head; //& Initialize previous_last to head
node *last_node = head; //& Initialize last_node to head

//& Loop until the end of the linked list
while(last_node->next != nullptr){
  previous_last = last_node; //& Update previous_last to last_node
  last_node  = last_node ->next; //& Move last_node to the next node
}
previous_last -> next = nullptr; //& Set the next of previous_last to null
delete last_node; //& Delete the last node

//& Print the data of the nodes
cout << head -> data << endl; //& Print the data of the first node
cout << head -> next -> data << endl; //& Print the data of the second node
cout << head -> next -> next -> data << endl; //& Print the data of the third node
cout << head -> next -> next -> next -> data<< endl; //& This line will cause an error because the fourth node has been deleted

getch(); //& Wait for a key press
}
