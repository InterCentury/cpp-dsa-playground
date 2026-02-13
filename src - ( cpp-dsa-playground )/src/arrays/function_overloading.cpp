#include <iostream>
#include <conio.h>
using namespace std;

int sum(int num1 , int num2 ){

    int sum = num1 + num2  ;
    cout << sum << endl;
}

int sum(int num1 , int num2 , int num3 ){

    int sum = num1 + num2 + num3 ;
    cout << sum << endl;
}

int main(){

    sum(10 , 12);
    sum (12 , 12 ,12);

    getch();
}