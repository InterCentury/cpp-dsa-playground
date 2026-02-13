#include<iostream>// using this header file for input/output
#include<conio.h>// using this header file for the getch() function
using namespace std;
// lets create the basic structure of the doubly linked - list
class node{ public:  // create named node for linked list
 int data; node *previous_node; node *next;
 node(int data) // constructor for initialize their value / data
     {
       this -> data = data; // using this for intializing the data of the linked list
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
      node *temp_revarse_traverse = head;
      while(temp_revarse_traverse -> next != nullptr)
           {// this pointer points to the last node for reverse printing process
            temp_revarse_traverse = temp_revarse_traverse -> next;
           }
           // the reverse printing process start
           cout << endl <<"Reversed linked list :";
           while(temp_revarse_traverse  != nullptr)
                {
                   cout << temp_revarse_traverse -> data << " "; temp_revarse_traverse = temp_revarse_traverse ->previous_node ; 
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
int main(){ // the main function start 
  node *head = nullptr;
  node *traverse = nullptr;
   
   cout <<"Enter total amount of elements : ";
   int amount_of_elements; cin >> amount_of_elements;
  // using for-loop for take input from the user
  for(int index = 1 ; index <= amount_of_elements ; index++)
     {
      cout << "Enter data " << index <<" :";
      int input_data; cin >> input_data;
      node *data_initialization_node = new node(input_data);
      if(head == nullptr) // initialize the data of the head / 1st node
        {
          head = data_initialization_node;
          traverse = head;
        }
       else{ // it the head pointer in not equal to null
            traverse -> next = data_initialization_node;data_initialization_node -> previous_node = traverse; traverse = traverse -> next;
           } 
     }
 forward_printing_process(head);// call the function that prints the linked list forwardly
    reversed_printing_process_of_the_linked_list(head);// call the function that prints the linked list reversely
        deletion_process_function(head);// call the head deletion process function for delete the head pointer


  getch();
}