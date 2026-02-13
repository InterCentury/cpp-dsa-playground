#include<iostream>// using this header file for input/output
#include<conio.h>// using this header file for the getch() function
using namespace std;
// lets create the basic structure of the doubly linked - list
class node{ public:  // create named node for linked list
 int data; node *previous_node; node *next;
 node(int data) // constructor for initialize their value / data
     {
       this -> data = data; // using this for initializing the data of the linked list
       this -> previous_node = nullptr; // set the last value of previous node to null
       this ->next = nullptr; // set the last value of next node to null
     } // end of the node constructor
};
int forward_printing_process(node *head) // this function display the main linked list
    {
      node *temp_traverse = head;
      cout << endl <<"forward linked list :";
      while(temp_traverse != nullptr)
           {
            cout << temp_traverse-> data <<" ";  temp_traverse = temp_traverse ->next;
           }  
    } 
int reversed_printing_process_of_the_linked_list(node *head)// this function display the reversed linked list
    {
      node *temp_reverse_traverse = head;
      while(temp_reverse_traverse -> next != nullptr)
           {// this pointer points to the last node for reverse printing process
            temp_reverse_traverse = temp_reverse_traverse -> next;
           }
           // the reverse printing process start
           cout << endl <<"Reversed linked list :";
           while(temp_reverse_traverse  != nullptr)
                {
                   cout << temp_reverse_traverse -> data << " "; temp_reverse_traverse = temp_reverse_traverse ->previous_node ; 
                }
    }
    void deletion_process_function(node *head )    
         {
           node *temp_delete_entire_linked_list = head;
           while(temp_delete_entire_linked_list -> next!= nullptr) // delete the entire linked list 1 by 1
                { 
                  temp_delete_entire_linked_list = temp_delete_entire_linked_list -> next;
                  delete head; // it delete the current head pointer 
                  head = temp_delete_entire_linked_list;// head pointing to the next pointer for traversing 
                } delete temp_delete_entire_linked_list;
         }
   void head_update(node **head)
        {
          cout << endl <<"Enter the data that you want to add at the head of the list :";
          int new_head_data; cin >> new_head_data;
          node *temp_new_head = new node(new_head_data);
          temp_new_head -> next = *head;  (*head) -> previous_node = temp_new_head;   *head = temp_new_head;
        }     
    void display_after_head_update(node *head)
         {
         node *temp_traverse_print = head;
         cout << endl <<"forward linked list after updating the head:";
         while(temp_traverse_print != nullptr)
              {
               cout << temp_traverse_print-> data <<" ";  temp_traverse_print = temp_traverse_print ->next;
              }  
         }     
int main(){ // the main function start 
  node *head = nullptr; //declare some basic things for traversing
  node *traverse = nullptr;
   
   cout <<"Enter total amount of elements : ";
   int amount_of_elements; cin >> amount_of_elements;
  // using for-loop for take input from the user
  for(int index = 1 ; index <= amount_of_elements ; index++)
     {
      cout << "Enter data " << index <<" :";  int input_data; cin >> input_data;
      node *data_initialization_node = new node(input_data);
      if(head == nullptr) // initialize the data of the head / 1st node
        {
          head = data_initialization_node;
          traverse = head;
        }
       else{ // it the head pointer in not equal to null
            traverse -> next = data_initialization_node;data_initialization_node -> previous_node = traverse; traverse = traverse -> next;
           } 
     }// call the functions for printing and updating
 forward_printing_process(head);// call the function that prints the linked list forwardly
    reversed_printing_process_of_the_linked_list(head);// call the function that prints the linked list reversely
          head_update(&head);// this function update the head pointer by taking the data from the user
            display_after_head_update(head);//display the linked list after update the head of the list
               deletion_process_function(head);// call the head deletion process function for delete the head pointer

  getch();
}