
//*  Q. Consider an implementation of unsorted singly linked list. 
//*  
//*  a) Insertion at the front of the linked list
//*  b) Insertion at the end of the linked list
//*  c)Deletion of the front node of the linked list
//*  d)Deletion of the last node of the linked list
#include<iostream>
#include<conio.h>
using namespace std;
class node{
            public: int data; node *next;
            node(int data){  this -> data = data;  this -> next = nullptr;}
          };
int main(){ // the main function start
 node *head = new node(1);
  head -> next = new node(2);
    head -> next -> next = new node(3);
      head -> next -> next -> next = new node(4);

cout <<"the main linked list :";
 node *current = head;
 while (current -> next != nullptr)
       {
         cout << current-> data << " "; current = current -> next;
       }
 //~ Q1:  Insertion at the front of the linked list
 node*  temp = new node(0); temp->next = head;head= temp; 
  //* print the data
  cout <<endl<<"ans of the Q1: Insertion at the front of the linked list : ";
  node *curent_2 = head;
 while (curent_2 -> next != nullptr)
       {
         cout << curent_2-> data << " ";
         curent_2 = curent_2 -> next;
       }  
 //~ Q2:  Insertion at the end of the linked list
 node *temp_data = new node(5); node *temp_1= head; node *temp_2 = head;
 while (temp_1-> next != nullptr
       {
        temp_1= temp_1-> next;
       }
       temp_1-> next = temp_data; temp_data -> next = nullptr;

 //* printing the solution of the 2nd  question      
   //* print the data
   cout <<endl<<"ans of the Q2: Insertion at the end of the linked list : ";

node *current_3 = head;
 while (current_3 -> next != nullptr)
       {
         cout << current_3-> data << " ";
         current_3 = current_3 -> next;
       }
 //~ Q3:   Deletion of the front node of the linked list
 
 node *head_for_delete = head; head = head -> next; delete head_for_delete;
 //* print the data
node *current_4 = head;
 cout <<endl<<"ans of the Q3: Deletion of the front node of the linked list : ";
  while (current_4 -> next != nullptr)
      {
        cout << current_4-> data << " "; current_4 = current_4 -> next;
      }
  //~ Q4:   Deletion of the last node of the linked list
  node *delete_the_last = head;
   while(delete_the_last -> next -> next != nullptr)
        {
          delete_the_last = delete_the_last -> next;
        }
        delete delete_the_last -> next;  delete_the_last -> next = nullptr;
  //* print the data
  cout <<endl<<"ans of the Q4: Deletion of the last node of the linked list : ";

   node *current_5 = head;
   while (current_5 -> next != nullptr)
    {
      cout << current_5-> data << " "; current_5 = current_5 -> next;
    }

getch();
}