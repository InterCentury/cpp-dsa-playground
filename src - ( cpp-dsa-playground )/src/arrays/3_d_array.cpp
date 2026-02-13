#include<iostream>
#include<conio.h>
using namespace std;
int main(){
 int array[3][2][3]={
   {{1,2,3},{4,5,6}},
   {{7,8,9},{10,11,12}},
   {{13,14,15},{16,17,18}}

 };
 // dimension for 3d array
 for (int dimension = 0 ; dimension < 3 ; dimension++){
   cout << endl << endl;
  //*cout << endl << endl << dimension << " dimension start  "<<  endl;
  //* loop of rows
   for (int rows = 0 ; rows < 2 ; rows++){
    //* loop of columns
    for (int columns = 0 ; columns < 3 ; columns++){
      cout << "array[" <<dimension<<"]["<< rows <<"]["<<columns << "] = ";    cout << array[dimension][rows][columns];
      
      cout << endl;
    }  
    cout << endl;
   }
   //*cout <<dimension << " dimension end "<<  endl <<  endl;
   cout << endl;
 }

 //!---------------------- 4d array
 cout <<endl<<endl<<endl<<endl;
  // Define a 4D array
    int arr[10][10][10][10];

    // Initialize the 4D array
    for(int i = 0; i < 10; i++) 
    {
        for(int j = 0; j < 10; j++) 
        {
            for(int k = 0; k < 10; k++)
            {
                for(int l = 0; l < 10; l++) 
                {
                    arr[i][j][k][l] = i + j + k + l;
                }
            }
        }
    }

    // Print the 4D array
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            for(int k = 0; k < 10; k++) {
                for(int l = 0; l < 10; l++) {
                    std::cout << "arr[" << i << "][" << j << "][" << k << "][" << l << "] = " << arr[i][j][k][l] << std::endl;
                }cout << "COLUMNS"<< endl;
            }cout << "ROWS"<<endl<<endl;
        }cout << "3-D"<< endl<<endl<<endl;
    }cout << "4-D"<< endl<<endl<<endl<<endl;

  getch();
}