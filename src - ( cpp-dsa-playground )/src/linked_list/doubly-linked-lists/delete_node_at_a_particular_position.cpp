#include<iostream>//using this header file for input/output
#include<conio.h>// using this header file for the getch() function
 using namespace std;
 class node{public: int data; node *previous; node *next;
            node(int data){//using this constructor for initialize data and nodes
                          this -> data = data; this -> previous = nullptr; this -> next = nullptr;                         
                          } 
           };// node class end function and the main function start
int create_linked_list_function(node **head)
    {
      node *current_traversing_node = nullptr; node *temp_head_creation_node = *head;
        cout<<"Enter total amount of nodes in your linked list :"; int amount_of_nodes; cin >> amount_of_nodes;
         for(int list_create_loop = 1; list_create_loop <= amount_of_nodes; list_create_loop++)
            {
             cout << "Enter the data of node "<< list_create_loop<<" :";
              int temp_list_data; cin >> temp_list_data;
              node *temp_data_initialization_node = new node(temp_list_data);
               if(*head == nullptr)
                 {
                  *head = temp_data_initialization_node; current_traversing_node = *head;
                 }
             else{
             current_traversing_node -> next = temp_data_initialization_node; temp_data_initialization_node -> previous = current_traversing_node;
               current_traversing_node = current_traversing_node -> next;
                 }     
            }            
    }
    void display_data_linked_list_function(node *head)
         {
          //* printing the Forward linked list
          node *traverse_and_forward_printing_node = head;
           cout << endl << "The forward linked list :";
           while(traverse_and_forward_printing_node  != nullptr)
                {
                  cout << traverse_and_forward_printing_node -> data<<" "; 
                   traverse_and_forward_printing_node = traverse_and_forward_printing_node -> next;
                }   
          // printing the Reversed linked list       
          node *traverse_reverse_printing_node = head;
               while (traverse_reverse_printing_node ->next != nullptr)
                      {
                         traverse_reverse_printing_node = traverse_reverse_printing_node ->next;
                      }
          
          cout << endl <<"The reversed linked list :";
           while(traverse_reverse_printing_node != nullptr)
                 {
                  cout <<traverse_reverse_printing_node -> data <<" "; traverse_reverse_printing_node = traverse_reverse_printing_node -> previous;
                 }      
         }
   void delete_node_at_a_particular_position_function(node *head)
        { 
          cout << endl <<"Enter the position of node that you want to delete :";
           int delete_node_position; cin >>delete_node_position;
           if(delete_node_position == 1)
             {
              node *temp_delete = head; head = head -> next; head -> previous  = nullptr;  delete temp_delete;
             }
             else{
             
                    node *temp_previous = head;
                    //this loop starts from 2 because it will pointing to the previous node of deletion node 
                   for(int traverse_loop = 2; traverse_loop < delete_node_position; ++traverse_loop)
                      {
                       temp_previous = temp_previous -> next;
                      }
                   node* next_node = temp_previous->next->next; node* node_to_delete = temp_previous->next;
                        next_node->previous = temp_previous; temp_previous->next = next_node;
                           delete node_to_delete;
                 
                  delete node_to_delete; // delete the particular node successfully  
             }                   
        } 
int main(){
  node *head = nullptr;
     create_linked_list_function(&head);// Create the linked list
        display_data_linked_list_function(head);// Display the linked list
           delete_node_at_a_particular_position_function(head);// Delete a node
             cout << endl << endl << "After delete the particular node of the linked list ," ;
               display_data_linked_list_function(head); // Display the linked list
                 cout << endl << "we've successfully deleted the particular node !";  

                 
                     
}                   
