#include <iostream>
#include <conio.h>
using namespace std;
 int main()
{
    
    int value , pos=-1 ;
    int size ;
    cout <<"numbers of integer you want to add : ";
     cin >> size;

     int num[size];

     cout << endl ;

     cout << "Enter the numbers : ";
     cout << endl ; // new line 
     
     //getting input using loop 
     for (int i = 0 ; i < size ; i++ ){
       
        cout << "->"; cin >> num[i];
     }
    cout << endl;
    cout << endl;
    cout<< "Enter the value , you want to search : ";
    cin >> value ;

    for ( int i = 0 ; i < 5 ; i++ )
    {
        if (value == num[i]){
            pos = i+1;
            break;
        }
    }
    
    if (pos ==- 1){
        cout << "Not found ";
    }
    
    else
        cout << value << " yes, it's avalable ";
          
        cout << endl ; // new line

        cout << "position of this valuse is  " << pos  ;

    
    
    getch();
  }
