#include <iostream>
#include<conio.h>
using namespace std ;
int main(){

    int fibo , first = 0 , second = 1 , i ,num;

    int a[30] ;

    cout << " How many fibonacchi number do you want ? " << endl;


    cout << " Enter times / number : " ;
      cin >> num ;

      a[0] = 0 ;
      a[1] = 1 ;

 // starting from 2 
      for ( i =  2 ; i < num ; i++ ){

         a[i] = a[i-1] + a[i - 2 ];
      }

      // printing fibonacchi number 

      cout << endl ;

    // using loop 
      for ( i = 0 ; i < num ; i++ )
          {
                  cout << a[i] << "-> " ;
          }        

 getch();         
}