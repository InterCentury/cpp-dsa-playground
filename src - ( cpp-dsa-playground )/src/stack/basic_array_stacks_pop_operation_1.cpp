#include<iostream>
#include<conio.h>
#define max_range 4
using namespace std;
//declare some global variables to make easy the task
  int global_stacks_array[max_range];
  int stacks_top = -1;
  //define a function for push datas on the stacks
    void push_data_function(int passed_data)
         {
          if(stacks_top == max_range - 1)
            {
              cout<<"Stack overflow"<<endl;
              return;
            }
          //increment the top's value and implement the passed data to the stacks
            stacks_top = stacks_top + 1;
            global_stacks_array[stacks_top] = passed_data;  
         }
    int delete_and_return_last_element_function() 
        {
          if(stacks_top == -1)         
             {
              cout<<endl<<"stack underflow !";
             }
          int returned_data_from_last_index = global_stacks_array[stacks_top];
          stacks_top = stacks_top - 1;
          return returned_data_from_last_index; 
         
        }
    void array_stacks_data_printing_function()
        {
          cout<<"Elements of stacks,"<< endl;
          for(int loop = stacks_top; loop >= 0; loop--)
             {
               cout<<global_stacks_array[loop]<<endl;
             }
        }
int main(){
   push_data_function(2); push_data_function(4);
   push_data_function(6); push_data_function(8);
   
   cout<<"primary stacks data,"<<endl;
    array_stacks_data_printing_function();
   
    int received_last_data_of_stacks_last_index = delete_and_return_last_element_function();
     cout<<endl<<"last element of stacks was : "<<received_last_data_of_stacks_last_index << endl;
      cout<<"stack after removing the last element,"<<endl;
         array_stacks_data_printing_function(); 

  getch();
}