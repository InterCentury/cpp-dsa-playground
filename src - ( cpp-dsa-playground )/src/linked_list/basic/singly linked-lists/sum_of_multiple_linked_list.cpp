#include<iostream>
#include<conio.h>
using namespace std;

// Define a node structure for a linked list
struct node{
     int data; // Data part of the node
     node * next; // Pointer to the next node in the list

     // Constructor to initialize a node with data and set next to nullptr
     node(int data){
          this->data = data;
          this->next = nullptr;
     }
}; // End of node structure

// Main function where the program execution begins
int main(){
  // Variables to store user input for the first list
  int list_1_value_1, list_1_value_2, list_1_value_3;

  // Prompt user to enter data for the first list
  cout << "Enter datas for the list 1" << endl;
  cout << "Enter the 1st value of list 1 : "; cin >> list_1_value_1;
  cout << "Enter the 2nd value of list 1 : "; cin >> list_1_value_2;
  cout << "Enter the 3rd value of list 1 : "; cin >> list_1_value_3;
  
  // Create the first linked list with user input
  node *list_1 = new node(list_1_value_1);
  list_1->next = new node(list_1_value_2);
  list_1->next->next = new node(list_1_value_3);

  // Calculate the sum of all nodes' data in the first list
  int sum_of_list_1 = list_1->data + list_1->next->data + list_1->next->next->data;
  cout << "sum of list 1 is : " << sum_of_list_1 << endl; 
  cout << endl << "<-------------------------------------------------------->" << endl;

  // Variables to store user input for the second list
  int list_2_value_1, list_2_value_2;

  // Prompt user to enter data for the second list
  cout << "Enter datas for the list 2" << endl;
  cout << "Enter the 1st list of list 2 : "; cin >> list_2_value_1;
  cout << "Enter the 2nd list of list 2 : "; cin >> list_2_value_2;

  // Create the second linked list with user input
  node *list_2 = new node(list_2_value_1);
  list_2->next = new node(list_2_value_2);

  // Calculate the sum of all nodes' data in the second list
  int sum_of_list_2 = list_2->data + list_2->next->data;
  cout << "sum of list 2 is = " << sum_of_list_2 << endl;
  cout << endl << "<-------------------------------------------------------->" << endl;

  // Print the sums of both lists
  cout << "sum of list 1 is : " << sum_of_list_1 << endl; 
  cout << "sum of list 2 is = " << sum_of_list_2 << endl;

  // Calculate and print the total sum of both lists
  int total_sum = sum_of_list_1 + sum_of_list_2;
  cout << "Addition of list 1 and list 2 list ";
  cout << "(" << sum_of_list_1 << " + " << sum_of_list_2 << ") = " << total_sum << endl;

  // Wait for a key press before closing the program
  getch();
}