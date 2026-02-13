//let's include some header files
#include<iostream>
#include<conio.h>
#define max_range 5 //define the max range of our stack
using namespace std; // use the standard namespace 
 //declare some global variables to access those from any where
 int global_stacks_array[max_range];
 int stacks_top = -1;
 // define a finction for the push operation
     void push_operation_fuction(int passed_data)
         {
          if (stacks_top == max_range -1)
             {
              cout <<"stack overflow"<< endl;
              
             }
           else
           {
           // increment the top's value and implement the passed data to the stack
            stacks_top = stacks_top + 1;
            global_stacks_array[stacks_top] = passed_data;
            cout << "pushed" << passed_data << "onto the stack"<<endl;
           }  
         }
 // define a function for the pop operation
    int pop_operation_function()
        {
          if(stacks_top == -1)
            {
              cout<<"stack underflow"<<endl;
              return -1;// exit the function
            }
            int returned_data = global_stacks_array[stacks_top];
            stacks_top = stacks_top -1;
            return returned_data;
        };
  // display stack function
   void display_stack_data_function()
       {
        //using for loop to print all the elements of the stack
        for (int loop = stacks_top;loop >=0;loop--)
            {
              cout << global_stacks_array[loop]<<endl;
            }
       };
   // print array function
   void print_poped_array(int passed_array[],int range)
        {
         cout<< endl<<"popped elements,"<< endl;
          for(int _loop = 0; _loop <range; _loop++)
            {
              cout << passed_array[_loop] << endl;
            }
        }                  
int main ()
{
 //let's push some data inside the stack
   push_operation_fuction(6);push_operation_fuction(5);
   push_operation_fuction(3);push_operation_fuction(5);
   push_operation_fuction(8);
   
 // call the display function to display those datas
   cout << endl <<"elements of stacks,"<<endl;
      display_stack_data_function();

  cout << endl << "display the elements of the stack after poping"<< endl;

  //call the pop function to pop some elements from the stack
    int popped_elements[max_range];
    int pop_count = 0;
  
 popped_elements[pop_count++] = pop_operation_function();
 popped_elements[pop_count++] = pop_operation_function();
 popped_elements[pop_count++] = pop_operation_function();

   //display those poped elements by using a seperate function
     print_poped_array(popped_elements, pop_count);


   // display the data after poping some elements
    cout<<endl<<"stack after poping some elements,"<<endl;
      display_stack_data_function();
   

  getch();// wait for a key press
}












