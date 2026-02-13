#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

int  row , col ;

int  a[2][4];


a[0][0] = 45 ;
a[0][1] = 56 ;
a[0][2] = 56 ;
a[0][3] = 54 ;


a[1][0] = 43 ;
a[1][1] = 78 ;
a[1][2] = 67 ;
a[1][3] = 59 ;


for ( row = 0 ; row < 2 ; row++)
    {
        for (col = 0 ; col < 4 ; col++)
            {
                cout << a[row][col] << "  " ; 
            }
       cout << endl ;
    }       


getch();

}
