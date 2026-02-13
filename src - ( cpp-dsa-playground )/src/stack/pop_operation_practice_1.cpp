#include<iostream>
#include<conio.h>
#define max_range 5
using namespace std;
//declare some global varaiables 
  int global_stacks_array[max_range];
  int stacks_top = -1; //currently set it to -1 
   //define a fuction for push operations
     int push_data_function(int passed_data)
         {
          if(stacks_top == max_range - 1)
            {
              cout <<"stacks over flow";
              //return(); 
            }
          //icrement top's value 
            stacks_top = stacks_top + 1;
          //assign the passed data
            global_stacks_array[stacks_top] = passed_data;    
         }
   //define a function for top operations 
     int pop_operation() 
         {
          if(stacks_top == -1)
            {
              cout <<"stacks under flow !";
              //return;
            }
          int returned_last_data =global_stacks_array[stacks_top];
          stacks_top = stacks_top - 1;
          return returned_last_data;
         }      
    //define a print function to print the datas
      int print_function()
          {
           cout << "Element of  stacks,"<<endl;
           for(int loop = stacks_top;loop >= 0;loop--)
              {
                cout << global_stacks_array[loop] << endl;
              }
          }
int main()
{
  //push some datas by calling the push operations 
  push_data_function(10);
  push_data_function(20);
  push_data_function(30);
  push_data_function(40);
  push_data_function(50);

  //print data before the pop operation
    cout <<"data before using the pop operation,"<<endl;
    print_function();
  //print data after using the pop operation  
    pop_operation();
    cout <<"data after using the pop operation,"<<endl;
    print_function();

    getch();
}               