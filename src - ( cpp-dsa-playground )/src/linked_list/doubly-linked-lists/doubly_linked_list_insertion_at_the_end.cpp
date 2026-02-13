#include<iostream>// For input/output operations
 #include<conio.h>// For getch() function
using namespace std;
class node{ public: // Node class for Doubly Linked List
 int data; node *previous; node *next;
 node(int data) // Constructor to initialize data and nodes
     {
      this -> data = data; this -> previous = nullptr; this -> next = nullptr;
     }
};// structure end!
int build_primarylinked_list_fn(node **head)// Function to create and expand the linked list
    {
      node *temp_traverse;// Temporary node for traversal and expansion 
      cout<< "Enter total amount of elements:";
      int amount_of_elements; cin >> amount_of_elements;// ask for size of the linked list
      for(int loop = 1; loop <= amount_of_elements; loop++)// Loop to take input from the user and create the linked list
         {
          cout <<"Enter data " << loop <<" :"; int input_data; cin >> input_data;
          node *temp_data_initialization_node = new node(input_data);
            if( *head == nullptr)//* if the linked list/head is empty
              {
                *head = temp_data_initialization_node; temp_traverse = *head;
              } else{
                     temp_traverse -> next = temp_data_initialization_node; temp_data_initialization_node ->previous = temp_traverse; 
                     temp_traverse = temp_traverse -> next;
                    }    
         }
    }
    int add_element_at_the_end_function(node **head)
        {
          cout  << endl <<"Enter element :";  int last_element;  cin >> last_element; cout <<endl;
          node *last_data_initialization_node  = new node(last_element);
          node *temp_traverse_2 = *head;
          while( temp_traverse_2 -> next != nullptr)
               {
                temp_traverse_2 = temp_traverse_2 -> next; // the temp_traverse_2 will become the last node of the current linked list
               }
               temp_traverse_2 -> next  = last_data_initialization_node;// the last_data_initialization_node become the new last node
               last_data_initialization_node -> previous = temp_traverse_2; // the second last node become the previous part of the last data initialization node
               last_data_initialization_node -> next = nullptr;// the next part of the new last node become nullptr
        }      
        void display_linked_list(node *head)
             {
              cout << endl << "The forward linked list :";
              node *temp_display_traverse = head;
               while( temp_display_traverse != nullptr )//using while loop for display the linked list
                    {
                      cout << temp_display_traverse -> data <<" "; temp_display_traverse = temp_display_traverse -> next; 
                    }
               //*------------------------------------------------------------------------------------->  
               cout << endl << "The reversed linked list :";
               node *temp_become_last = head;
               while ( temp_become_last -> next != nullptr )
                     {
                      temp_become_last = temp_become_last -> next;
                     }
               // print the reversed linked list by using while loop
               node *temp_become_first = temp_become_last;
               while(temp_become_first  != nullptr)
                    {
                      cout<< temp_become_first ->data <<" "; temp_become_first = temp_become_first -> previous;
                    } cout << endl;            
             }
int main(){
node *head = nullptr;

 build_primarylinked_list_fn(&head); // call the expand function for create the linked list by take the input from the user
  cout <<"The basic linked list created by the user :"; 
  display_linked_list(head); // call display function for show / display the linked list

 cout << "Enter how many elements you want to add at the end :";
   int total_last_elements; cin >> total_last_elements;
   for(int loop_a = 1; loop_a <= total_last_elements; loop_a++)
      {
        add_element_at_the_end_function(&head); // this function will add a new element at the end of the linked list
      }
  cout << endl <<"After add a new element at the end :";  display_linked_list(head);// again display the linked list

getch();
}










