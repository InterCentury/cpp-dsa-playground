#include<iostream>
#include<conio.h>
using namespace std;
struct node
       {
        int data;
        node *next;
        //* constructor for initialize the data and next
        node(int data)
            {
              this-> data = data;
              this-> next = nullptr;
            }
       };//* structure end, and main function start 
int main()
    {
       
       //head-> next = new node(2);

       //* initialize data by using loop
       cout <<"Enter the total amount of data :";
         int user_input_data; cin >> user_input_data;

       node* head = nullptr; // Initialize head with nullptr

       //* take input by using loop
       for( int index = 1 ; index <= user_input_data ; index++ )
           {
            int data_of_the_list;
            cout <<"Enter data " << index <<" :";
            cin >> data_of_the_list;
            cout << endl;
            
            if (head == nullptr)
               {
                 head = new node(data_of_the_list);    
               }
           else{
               node *newnode = new node(data_of_the_list);
               newnode -> next = head;
               head = newnode;
               }
            
            
           }

       // Output the linked list
              node* current = head;
              while (current != nullptr) {
                  cout << current->data << " ";
                  current = current->next;
              } 
    getch();         
    }       
     