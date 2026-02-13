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
               create_current ->next = dynamic_list_addition_node; dynamic_list_addition_node -> previous = create_current; 
               create_current = create_current -> next; 
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
int insertion_node_at_the_particular_position_function(node **head)
    {
     //ask user for the position of the list
       cout << endl << "Enter the position for inserting new node :";
        int insertion_node_position_from_the_user; cin >> insertion_node_position_from_the_user;

     //find the length of our circular doubly  linked list for traverse to the last
       node *find_last_and_traverse = *head;   
       int length_of_list = 1;
       while( find_last_and_traverse -> next != *head)
            {
              find_last_and_traverse = find_last_and_traverse -> next;
               length_of_list = length_of_list + 1;
            }
       if( insertion_node_position_from_the_user == 1 )
         {
           //ask user for the new data for the new head ( inserted ) node
             cout << endl << "Enter the data for the new head node :";
               int inputted_new_head_node_data; cin >> inputted_new_head_node_data;
                  node *new_inserted_head_node = new node(inputted_new_head_node_data);
           //This line assigns the next pointer of the newly inserted node (new_inserted_head_node) 
            //to point to the current head node (*head).
              new_inserted_head_node->next = *head;
              //Here, we set the previous pointer of the new node to the previous pointer of the current head node.
                 new_inserted_head_node->previous = (*head)->previous;
                 //This line updates the next pointer of the node preceding the current head node (which is the last node in the list) 
                  //to point to the newly inserted node.
                    (*head)->previous->next = new_inserted_head_node;
                     // we update the previous pointer of the current head node to point to the newly inserted node, 
                     //effectively making it the new head of the list.   
                       (*head)->previous = new_inserted_head_node;
                        //finally, our new node become the head node of the list   
                          *head = new_inserted_head_node;

          // the time complexity of this task is:  O(n)
         }
    else if(insertion_node_position_from_the_user == length_of_list)
            {
              //declare the data & ask user for the data of the new node
                cout << endl << "Enter the data for the new tail node :";
                 int inputted_new_tali_nodeS_data; cin >> inputted_new_tali_nodeS_data;
                 //create a node with given data for the new tail node
                   node *new_tail_node = new node(inputted_new_tali_nodeS_data);
                   //create a node for traverse and pointing to the last node of the list
                     node *temp_traverse_to_the_last_current_last_node = (*head) -> previous;
                     //the current temp traverse is now pointing to the current last (by circular reversing traverse)
                       //temp traverse -> next new tail == new tail become our new last node
                         temp_traverse_to_the_last_current_last_node -> next = new_tail_node;
                         //set the previous part of our new tail node 
                           new_tail_node ->previous = temp_traverse_to_the_last_current_last_node;
                           //now, new tail is our updated last node, so we need to change the next part of it to head node
                             new_tail_node -> next = *head;
                             //change the previous part of our head to new tail node
                               (*head) -> previous = new_tail_node;              

              // the time complexity of this task is:  O(n)
            } 
        else{
          // if the position is not == head or tail
           // create a node that will traverse to the previous node of the particular position
             node *traverse_to_the_the_position_of_previous_node = *head;
              // using for loop for this task O(n)
                for(int traversing_loop =1; traversing_loop <insertion_node_position_from_the_user -1; traversing_loop++)
                   {
                    traverse_to_the_the_position_of_previous_node = traverse_to_the_the_position_of_previous_node -> next;
                   }
                   // ask user for the data of the new node for particular position
                    cout << endl <<"enter data for the new node :";
                     int particular_position_node_data; cin >> particular_position_node_data;
                     //create a node with the given data 
                       node *particular_position_node_with_data = new node(particular_position_node_data);
                       //set the next part of our new to the next part of our traversing node
                         particular_position_node_with_data -> next = traverse_to_the_the_position_of_previous_node -> next;
                         //set previous part of our new node to the traversing node
                           particular_position_node_with_data -> previous = traverse_to_the_the_position_of_previous_node;
                           //change the next part of traversing node to new node 
                             traverse_to_the_the_position_of_previous_node -> next = particular_position_node_with_data;
                             //create a temp node that will points to the next part of our particular pos node 
                               node *temp_nexT_node_of_particular_pos_data = particular_position_node_with_data -> next;
                               //connection the previous of part of this node with particular pos node        
                                 temp_nexT_node_of_particular_pos_data -> previous = particular_position_node_with_data;
        }
    }     
int main(){
  node *head = nullptr;// set the head as nullptr
  // pass the head to the creation function
  create_list_function(&head);
  // pass the head pointe to the display function for printing data's of the list
  display_linked_list_function(head);
  //pass the head node to the insertion at the head function
  insertion_node_at_the_particular_position_function(&head);
  //print the list after update the head node and call the display function again
  cout<< endl << "-----------<after update the list>-----------" << endl << endl;
  display_linked_list_function(head);

 getch();
}           