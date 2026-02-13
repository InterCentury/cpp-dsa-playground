#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int num ;

cout << "Enter the number of students : ";
cin>>num ;                                                                                  
int marks[num];  

for (int i= 0 ; i < num ; i++ )
    {
       cout << "Marks of student  " << i+1 << " : ";
       cin >> marks[i];
    }
//Maximum and minimum
   
int min = marks[0];   
int max = marks[0];
    for(int i=0; i < num; i++)
   {
       if  (max < marks[i])
          {
             max = marks[i] ;
          }
                    
       if ( min > marks[i] )
          {
             min = marks[i] ;
          } 
        
    } 

cout << endl << endl << endl ;
    cout << "Maximum number is : "  << " : "<< max ;
    cout << endl ;
    cout << "Minumum number is : "  << " : "<< min ;  
 
    getch();   
}