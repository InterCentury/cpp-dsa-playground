#include<iostream>
#include<conio.h>
#define max_range 5 //define the max range of the stacks
using namespace std;
//initialize some global varaibles to access them from any where
  int global_stacks_array[max_range];
  int stacks_top = -1;
//create a function to push the elements to the stack
  int push_operation_function( int passed_data)      
      {  
        if(stacks_top <= 5)
          {
           stacks_top = stacks_top + 1;
           global_stacks_array[stacks_top] = passed_data;
           //stacks_top = stacks_top + 1;
          }
        else { cout << endl << "stack overloaded!" << endl;} 
      }
//create a function for the pop operation
  int pop_operation_function()
      { 
        stacks_top = stacks_top - 1;
      }
// create a display function for the display operaion
   void display_function()
        { 
         cout << endl << "---------------------------------" << endl; 
          for(int loop = 0; loop <= stacks_top; loop = loop + 1)
             {
               cout << "stack "<< loop << " = " << global_stacks_array[loop] << endl;
             }
        }

int main()
    {
      //input stacks data from the user by using loop
      for(int i_loop = 0; i_loop < 5; i_loop = i_loop + 1)
         {
          int user_input;
          cout <<" Enter the data of stack " << i_loop << " : ";
          cin >> user_input;
          push_operation_function(user_input);
          //delete user_input;
         }
     display_function(); 
     pop_operation_function();
     display_function();   
     getch();
    }      