#include<iostream>// using this for input / output 
#include<conio.h>// using this for getch() function
using namespace std;
class node{ public:
           int data; node *next;
           node(int data)
               {
                this -> data = data; // initialize the data
                 this -> next = nullptr; // set the default value of next is null
               }
          };
int create_circular_list_function(node **head)
    {
      node *create_and_traverse = nullptr;// the create node is currently pointing to the head
      //ask user for the length of the linked list
      cout <<"Enter the length of your linked list : ";
      int inputted_list_length; cin >> inputted_list_length;
      // using for loop for create the circular single linked list
       for(int list_creation_loop = 1; list_creation_loop <= inputted_list_length; list_creation_loop++)
          { 
           //ask user for the data of the list
            cout <<"Enter data "<<list_creation_loop <<" : ";
             int temp_dynamic_list_data; cin >> temp_dynamic_list_data;
             //create a dynamic node that will add at the list 
             node *dynamic_list_addition_node = new node(temp_dynamic_list_data);
           if ( *head == nullptr )
              {
               *head = dynamic_list_addition_node; 
                create_and_traverse = *head;
              }
          else{
               create_and_traverse ->next = dynamic_list_addition_node;
               create_and_traverse = create_and_traverse -> next; 
              }
              create_and_traverse ->next = *head; // the last node will pointing to the head pointer  
          }  
          
    }
void display_linked_list_function(node *head)
     {
      node *temp_traverse_and_printing = head;
      cout << "The circular singly linked list :" << endl;
       cout <<"Enter how many times you want to repeat the list :";
         int list_repeat_data; cin >> list_repeat_data;
          cout <<endl<<"Enter how many elements you want to see in each rows :";
           int list_data_per_rows; cin >> list_data_per_rows;
       for( int printing_loop =1; printing_loop <= list_repeat_data; printing_loop++)
          {  
          for(int single_time_list_printing = 1; single_time_list_printing <= list_data_per_rows; single_time_list_printing++ )
             {
              cout << temp_traverse_and_printing -> data <<"  ";
               // traverse the node by using,
                     temp_traverse_and_printing = temp_traverse_and_printing -> next;
            } cout << endl;
          }  
     } 
int delete_head_function(node **head)
{
    // Declare a temp pointer that currently points to the head node
    node *temp_delete_head = *head;
    // Declare another pointer to traverse and point to the last node
    node *traverse_and_pointing_to_the_last = *head;

    // Check if the list has only one node
    if ((*head)->next == *head)
    {
        // If true, set head to nullptr, making the list empty
        *head = nullptr;
    }
    else
    {
        // Traverse to the last node
        while (traverse_and_pointing_to_the_last->next != *head)
        {
            traverse_and_pointing_to_the_last = traverse_and_pointing_to_the_last->next;
        }
        // Point the last node to the second node (new head)
        traverse_and_pointing_to_the_last->next = (*head)->next;
        // Move the head to the second node
        *head = (*head)->next;
    }

    // Delete the temp pointer, effectively deleting the old head node
    delete temp_delete_head;
}

int main(){
  node *head = nullptr;// set the head as nullptr
  // pass the head to the creation function
  create_circular_list_function(&head);
  // pass the head pointe to the display function for printing data's of the list
  display_linked_list_function(head);
  //pass the head to the delete head function
delete_head_function(&head);
cout << endl << "List after delete the head node :";
//call the display linked list function 
display_linked_list_function(head);
  getch();
}             