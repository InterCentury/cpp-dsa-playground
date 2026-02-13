#include<iostream>
#include<conio.h>
using namespace std;
int const stacks_max_range = 7;
int stacks_array[stacks_max_range];
int global_top = -1;

// & create a function for the push operation 
   int push_operation_function(int passed_data)
       {
        global_top = global_top + 1;
        stacks_array[global_top] = passed_data;
       }
//& create a printing function for print the values 
    void printing_function()
          {
            // using loop for printing process 
               for (int loop = 0; loop <= stacks_max_range; loop = loop + 1)
                    {
                      cout << stacks_array[loop] << endl;
                    }
          }       

int main()
{

  // let's push some datas 
     push_operation_function(12);
     push_operation_function(234);
     push_operation_function(3534);
     push_operation_function(456456);
     push_operation_function(45645646);
     push_operation_function(4564664);
     push_operation_function(45646);
     push_operation_function(456);

     printing_function();
     getch();
}