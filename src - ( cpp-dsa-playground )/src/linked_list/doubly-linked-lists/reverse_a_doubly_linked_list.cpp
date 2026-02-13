#include<iostream>//usinf it for the input/output
#include<conio.h>//using it for the getch() function
 using namespace std;
 class node
       {public:
        int data; node *previous; node *next ;
        node( int data)// using this constructor for initialize data and nodes
            {
             this -> data = data; this -> previous = nullptr; this -> next = nullptr;  
            }
       };
int create_and_expend_linked_list_function(node **head )
    {
      cout<<"Enter the length of your linked list :";
      int length_of_list; cin >> length_of_list; cout <<endl;
       node *temp_traverse_and_expand = nullptr;
      for(int expand_list_loop = 1; expand_list_loop <= length_of_list; expand_list_loop++)
         {
          cout<<"Enter data "<<expand_list_loop <<" :";
            int temp_list_data; cin>> temp_list_data;
              node *temp_data_initialization_node = new node(temp_list_data);

          if(*head == nullptr)
            {
             *head = temp_data_initialization_node;
             temp_traverse_and_expand = *head;
            }else{
               temp_traverse_and_expand -> next = temp_data_initialization_node;
                 temp_data_initialization_node -> previous = temp_traverse_and_expand;
                   temp_traverse_and_expand = temp_traverse_and_expand -> next;
            }  
         }
    }
void display_linked_list_function(node *head)
     {
      //forward printing process----------------------------------------------->
      node *traverse_and_display_node = head;
       cout<<"Forward lined list :";
        while( traverse_and_display_node != nullptr)
             {
              cout << " " << traverse_and_display_node -> data; traverse_and_display_node = traverse_and_display_node -> next;
             } 
      //reversed printing process----------------------------------------------->
      cout << endl <<"Reversed linked list :";
      node *reverse_printing_node = head;
       while(reverse_printing_node -> next != nullptr )
            {
              reverse_printing_node = reverse_printing_node -> next;
            }
        while(reverse_printing_node  != nullptr)
             {
              cout << " " <<reverse_printing_node -> data;
                reverse_printing_node = reverse_printing_node -> previous;
             }        
     }
int reversed_linked_list_function(node **head)
    {
     // Initialize two temporary pointers to nodes 
     node *ptr_1 = *head;
      node *ptr_2 = ptr_1 -> next;
       
        ptr_1 -> next = nullptr;// Set the next pointer of the first node to nullptr
         ptr_1 -> previous = ptr_2;// Set the previous pointer of the first node to the second node
         while(ptr_2 != nullptr)// Traverse the linked list
              {
                ptr_2 -> previous = ptr_2 -> next;// Update the previous pointer of the second node
                 ptr_2 -> next = ptr_1; // Update the next pointer of the second node to point to the first node
                  ptr_1 = ptr_2;// Move the temporary pointers to the next nodes
                   ptr_2 = ptr_2 -> previous;//Move the temporary pointers to the next nodes
              }*head = ptr_1;// Update the head pointer to point to the reversed list
    } 

 int main(){
  node *head = nullptr;
  // call the create and expand linked_list function for create the linked list
   create_and_expend_linked_list_function(&head);
 // call the display linked list function for display the linked list  
   display_linked_list_function(head);

   cout << endl <<"After using and implementing the reverse linked list function," << endl;
  // call the reverse function
     reversed_linked_list_function(&head);
  // again call the print function for print the list
     display_linked_list_function(head);    
   getch();
 }           