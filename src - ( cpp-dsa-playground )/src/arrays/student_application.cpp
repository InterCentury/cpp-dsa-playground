#include<iostream>   
#include<conio.h>
using namespace std ;
int main(){

  int num , sum=0 ;

  cout << "Enter the number of student :";
  cin >> num;

  int student[num] ;

  for ( int index = 0 ; index < num ; index++){

    cout << "Enter the marks of student " << index + 1 << " : ";
    cin >> student[num] ;
    sum = sum + student[index];
    }

    cout << "Total marks      : " << sum ;
    cout <<  endl ;

    cout << "Avarage marks    :" << (float) sum / num ;
    cout << endl ;
   
    // ------------------------------------------------maximum 

    int max = student[0] ;
    for ( int index = 1 ; index < num ; index++){

        if ( max < student[index] ){

            max = student[index] ;
    }
    
    }
    // --------------------------------printing the maximum number 
    cout << "The maximum number is : " << max ;
    
    cout << endl;

    


    int min = student[0] ;
    for ( int index = 1 ; index < num ; index++){

        if ( min > student[index] ){

            min  = student[index] ;
    }

    }
    // --------------------------------printing the minimum  number 
    cout << "The minimum   number is : " << min ;
    
    cout << endl;
    
    

  getch();

}