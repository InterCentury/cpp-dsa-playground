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

for (  int i = number_of_rows  ;  i < number_of_rows  ;  i++ )
    {
        for( int j  = number_of_cols  ;  j < number_of_cols   ; j++ )
           {
            cout << "a["<< i <<"]["<< j <<"]"<<  " = " ;

            cin >> a[i][j];
           }
           cout << endl ;
    }

// getiing out put array

  for (  int i = number_of_rows  ;  i < number_of_rows  ;  i++ )
    {
        for( int j  = number_of_cols  ;  j < number_of_cols   ; j++ )
          {
              cout << a[i][j] << " "  ;
          } 
           cout << endl ;
       }

getch();

} 




















//Matrix addition & substraction

#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
       int number_of_rows , number_of_cols ;
       int a[10][10] , b[10][10] ,  c[10][10] ;
     
       cout << "* Enter the number of rows : " ;
       cin >> number_of_rows  ;
       cout << "* Enter the number of rows : " ;
       cin >> number_of_cols ;

       // --------------------------------------getting input matrix with loop
     
       //-------------------------------------------- getting input b matrix
       cout << "* Enter the element for a matrix : " << endl << endl ;
     {// start
     
       for ( int arange_1 = 0  ; arange_1 < number_of_rows ; arange_1++ )
           { // for colums
             for (int arange_2 = 0 ; arange_2 < number_of_cols ; arange_2++ )
                 {
                   cout << "a[" << arange_1 << "][" << arange_2 << "]" << " = " ;
                   cin >>  a[arange_1][arange_2];
                 } cout << endl ; // for new line
           }
     } // end
     
     // ---------------------------------------------getting input b matrix
     { //------------------------------------------------------------ start
     cout << "* Enter the element of b matrix : " << endl << endl ;
     
     for( int brange_1 = 0 ; brange_1 < number_of_rows ; brange_1++ )
        {
         for ( int brange_2 = 0 ; brange_2 < number_of_cols ; brange_2++ )
             {
               cout  << "b[" << brange_1 << "][" << brange_2 << "]" << " = " ;
               cin >> a[brange_1][brange_2];
             }cout << endl ; // for new line
        }
     }  // end
     
    
     //----------------------- getting output for a & b matrix using loop
     
     // ----------------------------------------------------printing gaps
     cout << endl << endl ;
     
     // ------------------------------------getting output for a matrix
     {//-------------------------------------------------------- start
       cout << endl <<"* Output for a matrix : " << endl << endl ;
     
       //using loops
       for (int arange_1 = 0 ; arange_1 < number_of_rows ; arange_1++ )
           {
             for ( int arange_2 = 0 ; arange_2 < number_of_cols ; arange_2++)
                 {
                   cout << "a[" << arange_1 << "][" << arange_2 <<"]" << " = " << a[arange_1][arange_2];
                   cout << endl ;
                 } 
           }
     }// end
          
     //----------getting output for b matrix
     {
        cout  << endl <<"* Output for b matrix : " << endl << endl ;
                // using loops              
                for (int brange_1 = 0 ; brange_1 < number_of_rows ; brange_1++)
                     {
                            for ( int  brange_2 = 0 ; brange_2 < number_of_cols ; brange_2++ )
                                {
                           cout << "b[" << brange_1 << "][" << brange_2 << "]" << " = " << a[brange_1][brange_2];
                           cout  << endl ;     
                                } 
                     }                
     } 
     
     // -------------------------------------- matrix addition & substraction
     
     // -------------------------------------- matrix addition   start
     
     cout << endl << endl;
     
     cout << "* Matrix addition : " << endl << endl ;
           //using loops
            for ( int range_1 = 0 ; range_1 < number_of_rows ; range_1++ )
                {
                     for (int range_2 = 0 ; range_2 < number_of_cols ; range_2++ )
                         {
                          c[range_1][range_2] =  a[range_1][range_2] + b[range_1][range_2] ;
      
                         }
                }
     
     // ---------------------------------------------------printing addition 
      {

        for ( int range_1 = 0 ; range_1 < number_of_rows ; range_1++ )
                {
                     for (int range_2 = 0 ; range_2 < number_of_cols ; range_2++ )
                         {
                          cout <<     "a[" << range_1 << "][" << range_2 << "]" << " = " << a[range_1][range_2]<< " + " << "b[" << range_1 << "][" << range_2 << "]" << " = " << b[range_1][range_2]<< " = "<< c[range_1][range_2];
      
                         }
                }

      }  
     
     
     
      // end
     
     cout << endl << endl;
     
     //------------------------------------------------ matrix substraction
     // --------------------------------------------------------------start
     
       cout << "* Matrix substraction : " << endl << endl ;
           { // using loops
               for ( int range_1 = 0 ; range_1 < number_of_rows ; range_1++  )
                   {
                        for ( int range_2 = 0 ; range_2 < number_of_cols ; range_2++ )
                            {
     
     
                             c[range_1][range_2] = a[range_1][range_2] - b[range_1][range_2] ;
     
                             
                             
                  cout << endl ;     
     
                            }
                   }
           }
     

// --------------------------------------printing mattrix substraction 

{ //------------------------------------------------------ using loops
               for ( int range_1 = 0 ; range_1 < number_of_rows ; range_1++  )
                   {
                        for ( int range_2 = 0 ; range_2 < number_of_cols ; range_2++ )
                            {
     
     
                             
     
                             cout <<     "a[" << range_1 << "][" << range_2 << "]" << " = " << a[range_1][range_2]<< " + " << "b[" << range_1 << "][" << range_2 << "]" << " = " << b[range_1][range_2]<< " = "<< c[range_1][range_2];
                             
                  cout << endl ;     
     
                            }
                   }
           }




      // ---------------------------------------------------end
     
     getch();
     
}


