#include <iostream>
#include <conio.h>
using namespace std;
 int main(){

  int term ;
  cout << "Enter the terms of 1st number : ";
  cin >> term ;
  
  int arr1[term];
  int arr2[term];
  cout << "Enter the numbers : " << endl;
  for (int index = 0 ; index < term ; index++){
    cout << "->" ;
    cin >> arr1[index];
    cout << endl;
  }

  cout << "Array1 = " << endl;;
  for (int index = 0 ; index < 5 ; index++){
    cout << "->"<< arr1[index] << endl ;
  }

  //copying arrays 
  cout << "Array 2 = "<< endl;
  for (int index = 0 ; index < 5 ; index++){
    arr2[index] = arr1[index];
     cout << "->"<< arr2[index] << endl ;
  }
  
getch();
 }