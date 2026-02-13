#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

int  row , col ;
int a[2][3];

// getting input array 

cout << "Enter  the element for matrix :" << endl;

for ( row = 0 ; row < 2 ; row++ )
    {
        for( col = 0 ; col < 3 ; col ++ )
           {
            cout << "a["<<row<<"]["<<col<<"]"<<  " = " ;
            cin >> a[row][col];
           }
           cout << endl ;
    }


// getiing out put array 

for ( row = 0 ; row < 2 ; row++ )
    {
        for( col = 0 ; col < 3 ; col ++ )
           {
            // cout << "a["<<row<<"]["<<col<<"]"<<  " = " ;
            cout << a[row][col] << " "  ;
           } 
           cout << endl ;
    }

getch();
}

