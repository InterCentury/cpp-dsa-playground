
#include<iostream> //*Include the iostream library for input/output operations
#include<conio.h> //*Include the conio.h library for the getch() function
using namespace std;

//&   step 1: Define the structure of the doubly linked list
class node{ 
public:  
 int data; 
 node *previous; 
 node *next;

 //*Constructor to initialize the node with data and set the previous and next pointers to null
 node(int data) 
     {
       this -> data = data; 
       this -> previous = nullptr; 
       this ->next = nullptr; 
     } 
};
int main(){ 
  node *head = nullptr;
  node *traverse = nullptr;
  
   cout <<"Enter total amount of elements : ";
   int amount_of_elements; cin >> amount_of_elements;

  //&   step 2: Take input from the user and create the linked list
  for(int index = 1 ; index <= amount_of_elements ; index++)
     {
      cout << "Enter data " << index <<" :";
      int input_data; cin >> input_data;
      node *data_initialization_node = new node(input_data);
      if(head == nullptr) //*If the list is empty, initialize the head
        {
          head = data_initialization_node;
          traverse = head;
        }
       else{ //*If the list is not empty, add the new node to the end of the list
            traverse -> next = data_initialization_node;
            data_initialization_node -> previous = traverse; 
            traverse = traverse -> next;
           } 
     }

  //&   step 3: Print the linked list in forward direction
  node *temp_traverse = head;
  cout << endl <<"forward linked list :";
  while(temp_traverse != nullptr)
     {
      cout << temp_traverse-> data <<" ";  
      temp_traverse = temp_traverse ->next;
     } 

  //&   step 4: Print the linked list in reverse direction
  node *temp_reverse_traverse = head;
  while(temp_reverse_traverse -> next != nullptr)
      {
       temp_reverse_traverse = temp_reverse_traverse -> next;
      }
  cout << endl <<"Reversed linked list :";
  while(temp_reverse_traverse  != nullptr)
           {
              cout << temp_reverse_traverse -> data << " "; 
              temp_reverse_traverse = temp_reverse_traverse ->previous ; 
           } 

  //&   step 5: Delete the entire linked list
  // Step 5: Delete the entire linked list
   node *current_node = head;
   while(current_node != nullptr) 
   { 
       node *next_node = current_node->next; // Save the next node
       delete current_node; // Delete the current node
       current_node = next_node; // Move to the next node
   } 
head = nullptr; // Ensure the head pointer also points to nullptr after deletion

  getch();
}
