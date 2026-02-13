#include<iostream>
#include<conio.h>
using namespace std;
class node{public: int data; node *next; node* previous;
node(int data)// using constructor for initialize data
    {
      this-> data = data; this -> next = nullptr; this -> previous = nullptr;
    }
};// node class end, function and main function starts
int expand_linked_list_function(node **head)
    {
     node *temp_traverse_list = nullptr;// using it for traversing and expand the list  
      // ask for the size of the doubly linked list 
      cout <<"Please enter the length of you linked list :";
       int size_of_linked_list; cin>> size_of_linked_list;cout<< endl; // take input from the user 
       //create the linked list by using for loop and take data from the user 
       for(int list_loop = 1; list_loop <= size_of_linked_list; list_loop++)
          {
            cout <<"Enter data "<< list_loop <<" :";
            int linked_list_expand_data; cin >>linked_list_expand_data;
            node *temp_data_initialization_node = new node(linked_list_expand_data);
            if(*head == nullptr)
              {
                *head = temp_data_initialization_node;
                temp_traverse_list = *head;
              }
          else{
               temp_traverse_list -> next  = temp_data_initialization_node;temp_data_initialization_node ->previous = temp_traverse_list;
               temp_traverse_list = temp_traverse_list -> next;
              }    
          }
    }
    int display_linked_list_function(node *head)// this function will display the linked list (any linked list)
        {
         cout<< endl <<"Forward linked list :";
          node *traverse_and_printing = head;// using this node for traversing the list
          while (traverse_and_printing != nullptr)
          {
            cout << traverse_and_printing -> data <<" "; traverse_and_printing = traverse_and_printing -> next;
          } 
          //*--------------------------------------------------------->
         cout<<endl<<"Reversed linked list :";
          node *pointing_to_the_last_node = head;
          while (pointing_to_the_last_node -> next != nullptr)
                {
                  pointing_to_the_last_node = pointing_to_the_last_node -> next;
                }
          while (pointing_to_the_last_node != nullptr)// reverse printing process starts
                {
                 cout << pointing_to_the_last_node -> data <<" "; pointing_to_the_last_node = pointing_to_the_last_node -> previous;
                }            
        }
        int add_data_at_a_certain_position_function(node **head)
            {
              node *temp_current_node = *head; node *temp_next_node = nullptr;   node *modify_head = *head;
              cout << endl <<"enter the position for new node :";
                int node_position; cin >> node_position;
              cout << endl<<"Enter the data of the new node :";
                 int data_of_the_new_node; cin >> data_of_the_new_node;
              node *new_insertion_node = new node(data_of_the_new_node); 
                   if(node_position == 1)
                     {
                       // that means we need to change the head
                       new_insertion_node -> next = *head; 
                       (*head) -> previous = new_insertion_node;
                       *head = new_insertion_node;
                     }
                 else{
                     // step1: traverse until we got the position of the node
                      for(int traverse_loop =2; traverse_loop <=node_position; traverse_loop++)
                         {
                          temp_current_node = temp_current_node -> next;
                         }
                            temp_next_node = temp_current_node -> next;
                      //step 2: insert the node at the certain position
                      new_insertion_node ->next = temp_next_node;temp_next_node ->previous = new_insertion_node;
                       new_insertion_node -> previous = temp_current_node;temp_current_node -> next = new_insertion_node;    
                     }   
            }
int main(){
 node *head = nullptr;
 // currently our head is null, we need to expand our linked list so we can pass it to the 
     expand_linked_list_function(& head);// this fn will expand the linked list

 // print the non-updated doubly linked list
    cout<<"Non updated doubly linked list :"; display_linked_list_function(head);

 // update the linked list by using add data at a certain position function
     add_data_at_a_certain_position_function(&head); 

 // print the updated linked list 
    cout << endl <<"updated linked list :";display_linked_list_function(head);

  getch();
}



// Function to add a new node at a certain position in the linked list
int add_data_at_a_certain_position_function(node **head) {
    node *temp_current_node = *head; // Temporary pointer to the current node
    node *temp_next_node = nullptr; // Temporary pointer to the next node
    node *modify_head = *head; // Temporary pointer to modify the head if needed

    cout << endl << "Enter the position for new node: "; // Prompt for the position
    int node_position; // Variable to store the position
    cin >> node_position; // Read the position from the user

    cout << endl << "Enter the data of the new node: "; // Prompt for the data
    int data_of_the_new_node; // Variable to store the new node's data
    cin >> data_of_the_new_node; // Read the data from the user

    // Create a new node with the given data
    node *new_insertion_node = new node(data_of_the_new_node);

    // If the position is 1, insert the new node at the beginning
    if (node_position == 1) {
        new_insertion_node->next = *head; // Set the next of the new node to the current head
        (*head)->previous = new_insertion_node; // Set the previous of the head to the new node
        *head = new_insertion_node; // Update the head to the new node
    } else {
        // Traverse until the position of the node is found
        for (int traverse_loop = 2; traverse_loop <= node_position; traverse_loop++) {
            temp_current_node = temp_current_node->next; // Move to the next node
        }
        temp_next_node = temp_current_node->next; // Set the next node

        // Insert the new node at the certain position
        new_insertion_node->next = temp_next_node; // Set the next of the new node
        temp_next_node->previous = new_insertion_node; // Set the previous of the next node
        new_insertion_node->previous = temp_current_node; // Set the previous of the new node
        temp_current_node->next = new_insertion_node; // Set the next of the current node
    }
}