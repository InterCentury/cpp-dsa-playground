#include<iostream>
#include<conio.h>
#include<string>
using  namespace std;
//! declare global variables
//& declare the 2d array for tic-tac-toe globally
char structure_array[3][3] = {{'1','2','3'},{'4','5','6' }, {'7','8','9'} };
int row ; int column ; char tokens_from_user = 'x'; bool tie = false ;
//*player Declaration
string player_1  = " "; string player_2  = " ";
//!---------------------------------------------------------------------------------->
void function_1(){
            cout <<structure_array[0][0] <<  "_|_" << structure_array[0][1] << "_|_" << structure_array[0][2] << endl;
            cout <<structure_array[1][0] <<  "_|_" << structure_array[1][1] << "_|_" << structure_array[1][2] << endl;
            cout <<structure_array[2][0] <<  " | " << structure_array[2][1] << " | " << structure_array[2][2] << endl;
} void function_2(){
    //&  declare variable for take input from player
    int digit_from_player;

    if (tokens_from_user == 'x'){
        cout <<player_1 <<"please enter :"; cin >> digit_from_player;
    }
    else if (tokens_from_user == 'o'){
        cout <<player_2 <<"please enter :"; cin >> digit_from_player;
    }
    //!--------------------------> digit matching
    if(digit_from_player == 1 ){ row = 0 ; column = 0;}
     if(digit_from_player == 2 ){ row = 0 ; column = 1;}
          if(digit_from_player == 3 ){ row = 0 ; column = 2;}
               if(digit_from_player == 4 ){ row = 1 ; column = 0;}
                    if(digit_from_player == 5 ){ row = 1 ; column = 1;}
                         if(digit_from_player == 6 ){ row = 1 ; column = 2;}
                              if(digit_from_player == 7 ){ row = 2 ; column = 0;}
                                   if(digit_from_player == 8 ){ row = 2 ; column = 1;}
                                        if(digit_from_player == 9 ){ row = 2 ; column = 2;}
                               else if (digit_from_player < 1 || digit_from_player > 9){ cout << "Invalid input !" << endl;}
    //* ----------------->check condition
    if(tokens_from_user == 'x' && structure_array[row][column] != 'x'  && structure_array[row][column] == 'o'){
        structure_array [row][column] = 'x';tokens_from_user  = 'o'; }
    else if(tokens_from_user == 'o' && structure_array[row][column] != 'x'  && structure_array[row][column] == 'o'){
        structure_array [row][column] = 'o'; tokens_from_user  = 'x';}
    else{  cout << "there is no empty space !" << endl;}
    function_1();
}
bool function_3(){
    for (int loop  = 0 ; loop < 3 ; loop++){
        if(structure_array[loop][0]== structure_array[loop][1] && structure_array[loop][2]== structure_array[loop][1] || structure_array[0][loop]== structure_array[1][loop] && structure_array[0][loop] == structure_array[2][loop] ){return true;}

        if(structure_array[0][0]== structure_array[1][1] && structure_array[1][1]== structure_array[2][2] || structure_array[0][2]== structure_array[1][1] && structure_array[1][1] == structure_array[2][0] ){return true;}
    }//&-------------------------> loop end!
    for(int rows = 0 ; rows  < 3 ; rows++){
        for(int columns = 0 ; columns < 3 ; columns++ ) {
            if (structure_array[rows][columns] != 'x' && structure_array[rows][columns] != 'o')
            { return false;}
        }
    } tie = true;return false;
}
//!----------------> main function start
int main(){
    //!--------------------------------------------------------------------------------->
//* collect player names
    cout <<"Enter the name of first player : ";
    getline(cin , player_1);
    cout << endl;
    cout << "Enter the name of second player : ";
    getline(cin, player_2);
//!--------------------------------------------------------------------------------->
    cout << player_1 <<" is first player , so  he/she will play first ."<< endl ;
    //*cout << player_1 << ", your symbol is  'O'" << endl << endl;
//!--------------------------------------------------------------------------------->
    cout << player_2 <<" is second player , so  he/she will play second ."<< endl;
    //*cout << player_2 << ", your symbol is 'x'" << endl << endl ;
    //! GAME starting massage
    cout << "The Game is starting now !" << endl;
    //*----------------> creating  a function to print the game board <---------------//

//& ----------example of structure ------------------> cout << "_|_|_"<< endl;
//& ----------example of structure ------------------> cout << "_|_|_"<< endl;
//& ----------example of structure ------------------> cout << " | | "<< endl;
    while(!function_3()){
        function_1();
        function_2();
        function_3();
    }

    if (tokens_from_user == 'x' && tie == false){
        cout << player_2 <<"wins !" << endl;
    }
    else if(tokens_from_user == 'o' && tie == false){
        cout << player_1 <<"wins !" << endl;
    }
    else{
        cout << "it's a tie!"<<endl;
    }


    getch();
}
