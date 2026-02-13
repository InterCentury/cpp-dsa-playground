#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{


int  number_of_rows , number_of_cols ;
int a[10][10] , b[10][10] , c[10][10];

cout << "Enter the number of rows & colums : " ;
cin >> number_of_rows >> number_of_cols ;



// getting input array 

cout << "Enter  the element for matrix :" << endl;

for ( number_of_rows = 0 ; number_of_rows < 2 ; number_of_rows++ )
    {
        for( number_of_cols = 0 ; number_of_cols < 3 ; number_of_cols ++ )
           {
            cout << "a["<< number_of_rows <<"]["<< number_of_cols <<"]"<<  " = " ;

            cin >> a[number_of_rows][number_of_cols];
           }
           cout << endl ;
    }


// getiing out put array

   for ( number_of_rows = 0 ; number_of_rows < 2 ; number_of_rows++ )
       {
          for( number_of_cols = 0 ; number_of_cols < 3 ; number_of_cols ++ )
             {
  
              cout << a[number_of_rows][number_of_cols] << " "  ;
             } 
           cout << endl ;
       }

getch();

} 