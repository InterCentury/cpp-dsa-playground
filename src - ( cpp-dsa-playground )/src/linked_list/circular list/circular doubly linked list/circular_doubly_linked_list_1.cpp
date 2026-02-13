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
int create_list_function(node **head)
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
              }
          else{
               create_current ->next = dynamic_list_addition_node; dynamic_list_addition_node -> previous = create_current; create_current = create_current -> next; 
              }
              create_current ->next = *head; // the last node will pointing to the head pointer
              (*head) -> previous = create_current;     
          }  return 0;
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
              node * temp_reverse_traverse_and_printing = tail_pointer;
          for( int printing_loop =1; printing_loop <= list_repeat_data; printing_loop++)
             {  
             for(int single_time_list_printing = 1; single_time_list_printing <= list_data_per_rows; single_time_list_printing++ )
                {
                 cout << temp_reverse_traverse_and_printing -> data <<"  ";
                  // traverse the node by using,
                        temp_reverse_traverse_and_printing = temp_reverse_traverse_and_printing -> next;
                } cout << endl;
             }    

     }     
int main(){
  node *head = nullptr;// set the head as nullptr
  // pass the head to the creation function
  create_list_function(&head);
  // pass the head pointe to the display function for printing data's of the list
  display_linked_list_function(head);
  getch();
}             