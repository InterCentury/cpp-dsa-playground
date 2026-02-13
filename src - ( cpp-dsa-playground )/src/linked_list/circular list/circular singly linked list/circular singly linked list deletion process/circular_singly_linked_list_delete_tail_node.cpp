#include<iostream>
#include<conio.h>
using namespace std;
class node{ public:
  int data; node *next; 
  node( int data)
      {
        this -> data = data; this -> next = nullptr;
      }    
};
int create_circular_singly_linked_list_function( node **head)
    {
     node *create_node_and_traverse = nullptr;
      //ask user for the length of our list
      cout << "Enter the length of your list :";
      int length_of_list ; cin >> length_of_list;
      //using loop for create and traversing process
      for( int list_creation_loop = 1; list_creation_loop <= length_of_list; list_creation_loop ++)
         {
           // ask user for the data of the list and take input tha data
            cout << endl << "Enter data " << list_creation_loop <<" : ";
            int dynamic_list_data; cin >> dynamic_list_data;
            node *list_data_and_traversing_node = new node(dynamic_list_data);
          //check if the head node is created or not
            if (*head == nullptr)
               {
                *head = list_data_and_traversing_node;
                create_node_and_traverse = *head;
               }
           else{
                create_node_and_traverse -> next = list_data_and_traversing_node;
                create_node_and_traverse = create_node_and_traverse -> next;
           }
           //make the list circular by using,
           create_node_and_traverse -> next = *head;
           
         }
    }
int delete_tail_function( node **head)
    {
      //create a node for traverse and pointing to the tail node of the list
      node *traverse_to_previous_of_tail_node = *head;
      //traversing by using while loop
      while(traverse_to_previous_of_tail_node -> next -> next != *head)
           {
            traverse_to_previous_of_tail_node = traverse_to_previous_of_tail_node -> next;
           }
           node *temp_deleted_node = traverse_to_previous_of_tail_node -> next;
           traverse_to_previous_of_tail_node -> next = temp_deleted_node -> next;
           delete temp_deleted_node;
    }    
int display_linked_list_function( node *head)
    { 
     cout << endl <<"enter how many times you want to repeat the list :";
       int list_repeat_times; cin >> list_repeat_times; 
     cout << endl <<"Enter how many datas you want to see in each rows of the list :";
       int inputted_data_per_rows ; cin >> inputted_data_per_rows; 
        node *traverse_and_print_data = head;
        for( int repeat_times = 1; repeat_times <= list_repeat_times; repeat_times++)
           {
            for( int data_per_row = 1; data_per_row <= inputted_data_per_rows; data_per_row++)
               {
                cout << traverse_and_print_data -> data <<" ";
                 traverse_and_print_data = traverse_and_print_data -> next;
               }   cout << endl;
           }      
    }    
int main(){
node *head = nullptr;
 //pass the head node to the list creation function
    create_circular_singly_linked_list_function(&head);
 //call the display function to show the actual/non-updated linked ist
    display_linked_list_function(head);
 //call the tail deletion function for delete the last/tail node
    delete_tail_function(&head);
 //again call the display function to show the updated linked list
   cout << endl <<"After delete the tail node :";
   display_linked_list_function(head);       
}    
