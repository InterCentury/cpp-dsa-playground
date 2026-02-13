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
int delete_node_at_a_particular_position_function(node **head,int passed_length_of_list)
    {
      //initialize the length of our list
        int received_length_of_list = passed_length_of_list;
      //ask user for the deletion node position
        cout << endl <<"ENter the position of your node that you want to delete :";
         int deletion_node_position; cin >> deletion_node_position;
         //create a node that will points to the previous node of the deleted node
           node *previous_node_of_deleted_node = *head;
         //create a node that will points to the deleted node  
           node * deleted_particular_node = nullptr;
         if( deletion_node_position == 1) // 1 = delete head
           {
            deleted_particular_node = *head;// directly points to the deleted node
              //using a loop for traverse to the last node and change the next part of it 
                while( previous_node_of_deleted_node -> next != *head)
                     {
                       previous_node_of_deleted_node = previous_node_of_deleted_node -> next;
                     }
                     previous_node_of_deleted_node -> next = (*head) -> next;
                     (*head) =  (*head) -> next;// move the head node to the second node
                // finally, time to delete the previous head node by using deleted_particular_node
                   delete deleted_particular_node;
           }
     else if( deletion_node_position  == received_length_of_list)
            {
              while(previous_node_of_deleted_node -> next -> next != *head)
                   {
                    previous_node_of_deleted_node = previous_node_of_deleted_node -> next;
                   }
              previous_node_of_deleted_node -> next = deleted_particular_node;
                previous_node_of_deleted_node -> next = *head;
                 delete deleted_particular_node;
            }
        else{ // if the position is not equal to head and tail node
              //traversing by using for loop
                for ( int traversing_times = 0; traversing_times <=received_length_of_list; traversing_times++)
                    {
                       previous_node_of_deleted_node = previous_node_of_deleted_node -> next;
                    }
                   //previous_node_of_deleted_node = previous_node_of_deleted_node -> next; 
                    deleted_particular_node = previous_node_of_deleted_node -> next;
                     previous_node_of_deleted_node -> next  = deleted_particular_node -> next;
                      delete deleted_particular_node;                     
            }
    }        
// create a function for find out the length of out list 
int find_length_of_list(node *head)
     {
      node *traverse_and_node_count = head;
        int node_count  = 1;
         while( traverse_and_node_count -> next != head )
              {
                node_count = node_count +  1;
                  traverse_and_node_count = traverse_and_node_count -> next;
              }
        // return the size of our linked list bu using, 
        return node_count;      
     }         

int main(){
  node *head = nullptr;// set the head as nullptr
  // pass the head to the creation function
  create_circular_list_function(&head);
  // pass the head pointe to the display function for printing data's of the list
  display_linked_list_function(head);
  //find-out  the length of list by using a function
  int returned_node_count  = find_length_of_list(head);
  //call the deletion function for the deletion process of the list and pass the length of our list
  delete_node_at_a_particular_position_function(&head , returned_node_count);
  //again, call the display function for display the updated list
  cout << endl <<"List after deletion process ," << endl;
  display_linked_list_function(head);
 
 
  getch();
}             