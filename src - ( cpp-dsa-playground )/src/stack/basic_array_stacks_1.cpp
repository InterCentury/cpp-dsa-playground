#include<iostream>
#include<conio.h>
#define max_range 5
using namespace std;
//declare some global variables to make easy the task
  int global_stacks_array[max_range];
  int stacks_top = -1;
  //define a function for push datas on the stacks
    void push_data_function(int passed_data)
         {if(stacks_top == max_range - 1)
            {
              cout<<"Stack overflow"<<endl;
              return;
            }
            //print all the data of stacks by using a for loop
               for(int loop = 0; loop < max_range; loop++)
                  {
                    cout<<global_stacks_array[loop]<<endl;
                  }
          //increment the top's value
            stacks_top = stacks_top + 1;
          //implement the passed data to the stacks
            global_stacks_array[stacks_top] = passed_data;  
         }

int main(){
   push_data_function(2);
   push_data_function(4);
   push_data_function(6);
   push_data_function(8);
   push_data_function(10);
   push_data_function(10);
   push_data_function(10);

   //print all the data of stacks by using a for loop
     for(int loop = 0; loop < max_range; loop++)
        {
          cout<<global_stacks_array[loop]<<endl;
        }
  getch();
}