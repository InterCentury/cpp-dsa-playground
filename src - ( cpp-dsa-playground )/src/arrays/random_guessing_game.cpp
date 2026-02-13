#include<iostream>   
#include<conio.h>
#include<stdlib.h>
using namespace std ;
int main(){

 while(1){

  int guessnumber , randomnumber ;

 cout << "Enter your guess number between 1 to 5 : " ;
 cin >> guessnumber ;

 randomnumber = 1 + rand() % 5 ;

 cout << "The random number is                   : "<< randomnumber ;

 if ( guessnumber == randomnumber ){
  
  cout << endl << "You have won !" << endl << endl ;

 }
 else {

    cout << endl << "You have lost !" << endl <<"Try again ! "<<  endl ;
 }
 

  
 }
getch();

}