  //&some informations: 
  //a stack is a linear data structure in which insertions and deletions are allowed only at the end, called  top of the stack.
  //it follows LIFO (last in first out) principle.
  //stack is a collection of elements, which follows the particular order in which elements are added and
  //removed. In stack, elements are added and removed from the top of the stack.
  //stack is a linear data structure, it follows LIFO principle, it follows FILO principle
  //stack is a collection of elements, which follows the particular order in which elements are added and
  //! stack -> array || linked list == linear data structure 
    
  // example code of push operation 

#include<iostream>
#include<conio.h>
using namespace std;
int const max_stack_size = 6;
// create a global declaration of stacks 
   int stacks_array[max_stack_size]; //&it can store 7 elements (0-6 = 7)
// create a top variable TOP for traversing and implmentation process 
   int top = -1; //& currently its nothing so top == -1 

// ==create a push function for push operation 
    int push_fuction(int passed_data)
        {
          top = top + 1;
          stacks_array[top] = passed_data;


          
        }
// ==create a print function for printing process 
    void print_function()
         {
          cout << endl << "all data of the stack," << endl;
          for(int loop = 0; loop <=max_stack_size; loop++ )
             {
              cout<<stacks_array[loop]<<endl;
             }
         }        

int main()
{
 push_fuction(2);  push_fuction(3);
 push_fuction(6);  push_fuction(8);
 push_fuction(4);  push_fuction(78);
 push_fuction(45);
               
 print_function();

  getch();
}