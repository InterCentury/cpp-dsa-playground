#include<iostream>// using this for input / output 
#include<conio.h>// using this for getch() function
using namespace std;
class node{ public:
           int data; node *next; node*previous;
           node(int data)
               {
                this -> data = data; // initialize the data
                 this -> next = nullptr; // set the default value of next is null
                  this ->previous =nullptr;//set the default value of previous to null
               }
          };
int user_made_list_creation_function(node **head)
    {
      node *create_current = nullptr;// the create node is currently pointing to the head
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
                create_current = *head;
              } else{
                create_current ->next = dynamic_list_addition_node; dynamic_list_addition_node -> previous = create_current; create_current = create_current -> next; 
              }
              create_current ->next = *head; // the last node will pointing to the head pointer
              (*head) -> previous = create_current;     
          }  return 0;
    }
int deletion_node_at_a_particular_position_function(node **head , int passed_length_of_list)
    {
     int received_counted_node = passed_length_of_list;
      //ask user for the deletion node position
       cout << endl << "Enter the position of your node that you want to delete :";
        int inputted_deleted_node_position ; cin >> inputted_deleted_node_position;
          node *traverse_to_the_previous_node = nullptr; // it will pointing to the previous node of deleted node
           node *pointing_to_delete = nullptr;// it will directly pointing to the deleted node
              if( inputted_deleted_node_position == 1)// if the position of the node is head
                {
                 //head deletion process----------------------------------------->
                traverse_to_the_previous_node = (*head)->previous; 
                 (*head) -> previous = traverse_to_the_previous_node ;
                 traverse_to_the_previous_node -> next = (*head) -> next;
                   pointing_to_delete = *head; // set the deletion node to th head node
                    *head  = (*head)-> next ; // move the head node to the second node 
                     (*head) -> previous  = traverse_to_the_previous_node;
                      delete pointing_to_delete; // finally delete the head node of the list  
                }
        else if( inputted_deleted_node_position  == received_counted_node)
               {
                //tail deletion process-------------------------------------------->
                 traverse_to_the_previous_node = (*head) -> previous -> previous ;
                  ( *head )-> previous -> previous = traverse_to_the_previous_node;
                    pointing_to_delete = traverse_to_the_previous_node -> next;
                      pointing_to_delete -> next = *head;
                       traverse_to_the_previous_node ->next = *head;
                         (*head) -> previous = traverse_to_the_previous_node;
                          delete pointing_to_delete;// finally deleted the tail node/pointer 
                 
               }
      else{//if the position is not equal to head node or the tail node--------->
           traverse_to_the_previous_node = *head;//connect this node with the head node 
           for( int traversing_loop = 1; traversing_loop < inputted_deleted_node_position -1; traversing_loop++ )
              {
                traverse_to_the_previous_node = traverse_to_the_previous_node -> next;
              }
              pointing_to_delete = traverse_to_the_previous_node -> next;
               traverse_to_the_previous_node -> next = pointing_to_delete -> next;
               // traverse_to_the_previous_node -> next = pointing_to_delete -> next;
              if(pointing_to_delete -> next != nullptr)
                {
                 pointing_to_delete -> next -> previous = traverse_to_the_previous_node;
                }      
                delete pointing_to_delete;// finally deleted the particular node/pointer   
          }       
    } 
int find_length_of_list(node *head)
    {
      node *traverse_and_counting_node = head; int node_count = 1;
              while (traverse_and_counting_node -> next != head)
                    {
                         traverse_and_counting_node = traverse_and_counting_node -> next ;
                           node_count = node_count + 1;
                    }        return node_count;
    }            
void display_linked_list_function(node *head)
     {
      node *temp_traverse_and_printing = head;
      cout << "The circular doubly linked list deletion from a particular position," << endl << endl;
          cout <<"Enter how many times you want to repeat the list :";
            int list_repeat_data; cin >> list_repeat_data;
             cout <<endl<<"Enter how many elements you want to see in each rows :";
              int list_data_per_rows; cin >> list_data_per_rows;
       //---------------------------------<forward printing>-----------------------------------------------------    
              cout << endl << "The forward circular doubly linked list ," << endl; 
       for( int printing_loop =1; printing_loop <= list_repeat_data; printing_loop++)
          {  
          for(int single_time_list_printing = 1; single_time_list_printing <= list_data_per_rows; single_time_list_printing++ )
             {
              cout << temp_traverse_and_printing -> data <<"  ";
               // traverse the node by using,
                     temp_traverse_and_printing = temp_traverse_and_printing -> next;
            } cout << endl;
          }
       //---------------------------------<reverse printing>-----------------------------------------------------   
       cout << endl << endl << "The reversed circular doubly linked list ," << endl;
        node *tail_pointer = head;
         while(tail_pointer -> next != head)
              {
                tail_pointer = tail_pointer -> next;// it will pointing to the last nde of the list
              } 
              node * temp_reverse_traverse_and_printing = tail_pointer  ;
          for( int printing_loop =1; printing_loop <= list_repeat_data; printing_loop++)
             {  
             for(int single_time_list_printing = 1; single_time_list_printing <= list_data_per_rows; single_time_list_printing++ )
                {
                 cout << temp_reverse_traverse_and_printing -> data <<"  ";
                  // traverse the node by using,
                        temp_reverse_traverse_and_printing = temp_reverse_traverse_and_printing -> previous;
                } cout << endl;
             }    
     }
int main(){
 node *head = nullptr;
 //call the list creation_function 
 user_made_list_creation_function(&head);
 // call the display function, for display the actual / non-updated circular linked list
   display_linked_list_function(head); 
   int returned_counted_node = find_length_of_list(head);
    //cout << endl <<"counted node = " << returned_counted_node;   
//pass the head node to the deletion head function 
  deletion_node_at_a_particular_position_function(&head , returned_counted_node);
//again, print the list to check that our hrad node is deleted or not 
 cout << endl <<"list,sfter deletion anode at a particular position," << endl;
  display_linked_list_function(head);  

}          