//*  sum of multiple linked-list
#include<iostream>
#include<conio.h>
using namespace std;
struct node{
     int data; node * pointer_to_next;
          node( int data){
                    this -> data  = data;
                    this ->pointer_to_next = nullptr;
          }
};//  structure end!
int main(){
  int list_1_value_1 , list_1_value_2, list_1_value_3;
      cout << "Enter list_1 for the list 1" << endl;
       cout << "Enter the 1st list of list 1 : "; cin >> list_1_value_1;
        cout <<"Enter the 2nd  list of list 1 : "; cin >> list_1_value_2;
         cout <<"Enter the 3rd list of list 1 : "; cin >> list_1_value_3;
   
     node  *list_1 = new node(list_1_value_1);
      list_1 -> pointer_to_next =  new node(list_1_value_2);
       list_1 ->pointer_to_next->pointer_to_next = new node(list_1_value_3);

     int sum_of_list_1 = list_1->data + list_1->pointer_to_next->data + list_1->pointer_to_next->pointer_to_next->data;
       cout<<"sum of list 1 is : "<<sum_of_list_1<<endl; 
       cout <<endl<<"<-------------------------------------------------------->"<<endl;



int list_2_value_1 , list_2_value_2, list_2_value_3 , list_2_value_4;
     cout << "Enter values for the list 2" << endl;
      cout << "Enter the 1st list of list 2 : "; cin >> list_2_value_1;
       cout <<"Enter the 2nd  list of list 2 : "; cin >> list_2_value_2;
        cout <<"Enter the 3rd list of list 2 : "; cin >> list_2_value_3;
         cout <<"Enter the 4th list of list 2 : "; cin >> list_2_value_3;

     node *list_2 = new node(list_2_value_1);
      list_2->pointer_to_next = new node(list_2_value_2);
       list_2 ->pointer_to_next->pointer_to_next = new node(list_2_value_3);
        list_2->pointer_to_next->pointer_to_next->pointer_to_next = new node(list_2_value_4);

        int sum_of_list_2 = list_2 ->data + list_2 -> pointer_to_next -> data + list_2 -> pointer_to_next -> pointer_to_next -> data + list_2-> pointer_to_next -> pointer_to_next -> data;
         cout <<"sum of list 2 is = " << sum_of_list_2 <<endl;
cout <<endl<<"<-------------------------------------------------------->"<<endl;
int list_3_value_1 , list_3_value_2, list_3_value_3;
     cout << "Enter list_1 for the list 3" << endl;
      cout << "Enter the 1st list of list 3 : "; cin >> list_3_value_1;
       cout <<"Enter the 2nd  list of list 3 : "; cin >> list_3_value_2;
         cout <<"Enter the 3rd list of list 3 : "; cin >> list_3_value_3;

         node *list_3 = new node(list_3_value_1);
          list_3 -> pointer_to_next = new node(list_3_value_2);
           list_3 ->pointer_to_next -> pointer_to_next = new node(list_3_value_3);
           int sum_of_list_3 = list_3 ->data + list_3 -> pointer_to_next -> data + list_3 ->pointer_to_next -> pointer_to_next ->data;
           cout <<"sum of list 3 is = " << sum_of_list_3 <<endl;
cout <<endl<<"<-------------------------------------------------------->"<<endl;

      cout<<"sum of list 1 is : "<<sum_of_list_1<<endl; 
         cout <<"sum of list 2 is = " << sum_of_list_2 <<endl;
            cout <<"sum of list 3 is = " << sum_of_list_3 <<endl;

     int total_sum = sum_of_list_1 + sum_of_list_2 + sum_of_list_3;
     cout <<"Addition of all list ("<<sum_of_list_1 <<" + " << sum_of_list_2 << " + " << sum_of_list_3 <<") = " << total_sum <<endl;

   
  getch();
}