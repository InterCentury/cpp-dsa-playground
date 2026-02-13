#include<iostream>   
#include<conio.h>
#include<stdlib.h>
using namespace std ;
int main(){

int totalNum ;
cout << "Total random numbers : " ;
cin >> totalNum ;

cout << endl ;
cout << endl ;


for (int index = 1 ; index <= totalNum ; index++ ){

    int randomNumber = rand() ;
    cout << "Random number " << index <<" :"<< randomNumber << endl ; 
}

getch();
}
