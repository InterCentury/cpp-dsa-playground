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
          }  return 0;
    }
void insertion_at_the_N_position_function(node** head, int passed_tail_position) 
{
    // Prompt the user to enter the position for the new node
    cout << endl << "Enter the position of your new node :";
    int inserted_node_position_from_user; cin >> inserted_node_position_from_user;

    // Prompt the user to enter the data for the new node
    cout << endl << "Enter data for the new node :";
    int new_inputted_node_data; cin >> new_inputted_node_data;

    // Temporary node to traverse to the current last node
    node* temp_traversing_node_to_current_last = *head;
    int position_of_last_node = passed_tail_position;

    // Create a new node with the given data
    node *new_data_node = new node(new_inputted_node_data);

    // Check if the new node is to be inserted at the beginning
    if (inserted_node_position_from_user == 1) 
    {
        // Insert the new node at the beginning and update the head
        new_data_node->next = *head;
        *head = new_data_node;
    }
    // Check if the new node is to be inserted at the end
    else if (inserted_node_position_from_user == position_of_last_node) 
    {
        // Traverse to the last node
        while (temp_traversing_node_to_current_last->next != *head) 
        {
            temp_traversing_node_to_current_last = temp_traversing_node_to_current_last->next;
        }
        // Insert the new node at the end and update the last node's next pointer
        temp_traversing_node_to_current_last->next = new_data_node;
        new_data_node->next = *head;
    }
    // Insert the new node at the specified Nth position
    else 
    {
        node*   = *head;
        // Traverse to the node just before the specified position
        for (int traverse_loop = 1; traverse_loop < inserted_node_position_from_user - 1; traverse_loop++) 
        {
            previous_traverse_to_the_specific_position = previous_traverse_to_the_specific_position->next;
        }
        // Insert the new node at the specified position
        new_data_node->next = previous_traverse_to_the_specific_position->next;
        previous_traverse_to_the_specific_position->next = new_data_node;
    }
}

        
void display_linked_list_function(node *head)
     {
      node *temp_traverse_and_printing = head;
      cout << "The circular singly linked list ," << endl;
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
int length_of_circular_singly_linked_list_function(node *head)
     {
      node *find_last_and_traverse = head;
      int node_count = 1;
      while(find_last_and_traverse  -> next != head)
           {
            node_count = node_count + 1;
            find_last_and_traverse = find_last_and_traverse -> next;
           }

           return node_count;
     }
int main(){
  node *head = nullptr;// set the head as nullptr
  // pass the head to the creation function
  create_circular_list_function(&head);
  // pass the head pointe to the display function for printing data's of the list
  display_linked_list_function(head);
  int tail_position = length_of_circular_singly_linked_list_function(head);
  //for update the head, we need to call the insertion at the beginning function
  insertion_at_the_N_position_function(&head,tail_position);
  cout << endl <<"-----------circular list after updating the N_position---------------" << endl << endl;
  // again call the display function
  display_linked_list_function(head);
  getch();
}
