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
        cout<<"Enter total amount of nodes in your linked list :";
         int amount_of_nodes; cin >> amount_of_nodes;
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
                  current_traversing_node -> next = temp_data_initialization_node;
                    temp_data_initialization_node -> previous = current_traversing_node;
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
          node *traverse_and_reverse_printing_node = head;
          while (traverse_and_reverse_printing_node ->next != nullptr)
                 {
                    traverse_and_reverse_printing_node = traverse_and_reverse_printing_node ->next;
                 }
          
          cout << endl <<"The reversed linked list :";
           while(traverse_and_reverse_printing_node != nullptr)
                 {
                  cout <<traverse_and_reverse_printing_node -> data <<" ";
                   traverse_and_reverse_printing_node = traverse_and_reverse_printing_node -> previous;
                 }      
         }
         void deletion_process_of_the_head_function(node *head)
              {
                node *temp_delete = head; head = head -> next; head -> previous  = nullptr;  delete temp_delete;
              } 
int main(){
  node *head = nullptr;
  
  // pass the head to the create_linked_list_function
     create_linked_list_function(&head);//it will create the linked list by the help of the user
  //pass head to the display_data_linked_list_function for printing the data's of the linked list
      display_data_linked_list_function(head);
  //pass the head for delete the 1st node of the linked list 
      deletion_process_of_the_head_function(head);
  // let's see what happens after delete the 1st node of the linked list
       cout << endl << "After delete the 1st node of the linked list ," ;
         display_data_linked_list_function(head); 
           cout << endl << "we've successfully deleted the 1st node !";       
}                   
