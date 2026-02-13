#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main ()
{

int  num , avg , sum = 0 ;
int max , min ;
cout << "Enter the number of students : ";
cin >> num ;
string name ; // for using name 
int stu_num[num];

for ( int i = 0 ; i< num ; i++ )
    {
        

        cout << " Marks of student  :" << i+1 << " = " ;
        cin >>stu_num[num] ;

        sum = sum += stu_num[i] ;
        {
            

            if (max <  stu_num[i] )
               {
                 max =  stu_num[i] ;
               }
               
               {
            if (min >=  stu_num[i] )
               {
                 min =  stu_num[i] ;
               }
               }   
        }

    }

cout << endl << endl << endl ;

    cout << "Total marks   : " << sum   ;
    cout << endl; 
    cout << "avarage marks : " << sum / num  ; 
    cout << endl; 
    cout << "Maximum marks : " << max  ; 
    cout << endl; 
    cout << "minimum marks : " << min ;
    cout << endl;
    cout <<  

getch();
}