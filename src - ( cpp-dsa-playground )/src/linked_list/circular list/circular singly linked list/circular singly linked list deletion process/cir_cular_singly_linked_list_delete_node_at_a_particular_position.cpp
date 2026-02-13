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
      //return the length of our list
        return inputted_list_length;
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
              }
          else{
               create_current ->next = dynamic_list_addition_node; dynamic_list_addition_node -> previous = create_current; create_current = create_current -> next; 
              }
              create_current ->next = *head; // the last node will pointing to the head pointer
              (*head) -> previous = create_current;     
          }  //return 0;
    }
void display_linked_list_function(node *head)
     {
      node *temp_traverse_and_printing = head;
      cout << "The circular doubly linked list ," << endl << endl;
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
int delete_node_from_particular_position_function(node **head,int passed_length_of_list)
    {
     //receive and store the length of our list
       int received_length_of_list = passed_length_of_list;
      //ask user for the position of the deletion node
      cout <<endl<<"Enter the position of node that you want to delete :";
       int deletion_node_position_from_user; cin >> deletion_node_position_from_user;
       //create a traversing node, and currently pointing to head of the list
         node *traverse_to_particular_position = *head;
         //if the position = head node (1)
           if( deletion_node_position_from_user == 1 )
             {
              node *new_head_node  = ( *head )-> next;
              ( *head )-> previous -> next  = new_head_node; 
                new_head_node -> previous  = (*head) -> previous;
                node *temp_deleted_head_node = *head;
                 *head = (*head) -> next;
             }
         //if the position = tail/last node of the list    
          else if( deletion_node_position_from_user == received_length_of_list)
                 {
                  //create a new node that will points to the 2nd last node 
                    //(currently pointing to the head node)
                    node *pointing_second_last_node = *head;
                    //point it to the last node by using for loop
                      for( int loop =0; loop <= received_length_of_list-1; loop++)
                         {
                          pointing_second_last_node = pointing_second_last_node -> next;
                         }
                   //create a temporary node that will pointing to the last node 
                     node *temp_deleted_last = pointing_second_last_node -> next;      
                     //change the next part of our second tail node
                       pointing_second_last_node -> next = *head;  
                       //finally delete the last node
                         delete temp_deleted_last;       
                 }  
             else{
                 //create a traversing node that will points to the previous node of deletion node
                   node *traverse_to_the_before_of_N_position = *head;
                   // traverse it to the before of particular position by using loop
                    for(int traverse_loop =1; traverse_loop<deletion_node_position_from_user;traverse_loop++)
                       {
                         traverse_to_the_before_of_N_position = traverse_to_the_before_of_N_position ->next;
                       }
                       //create a deletion node that will pointing to the particular node
                       node *temp_deletion_node =traverse_to_the_before_of_N_position -> next;
                       //change the next part of it 
                       traverse_to_the_before_of_N_position ->next = traverse_to_the_before_of_N_position ->next->next;
                      //finally time to delete a the particular node
                        delete temp_deletion_node;
             }                      
  
    }     
int main(){
 node *head = nullptr;
 //&call the list creation_function 
 user_made_list_creation_function(&head);

 //receive the length of our list
   int received_length_of_list = user_made_list_creation_function(&head);
 //& call the display function, for display the actual / non-updated circular linked list
   display_linked_list_function(head); 
//&pass the head node and length of list  to the deletion head function 
  delete_node_from_particular_position_function(&head,received_length_of_list);
//&again, print the list to check that our particular node is deleted or not 
  display_linked_list_function(head);  

}          