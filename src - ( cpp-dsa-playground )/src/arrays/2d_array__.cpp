// Sum  of Diagonal Matrix
//-----------------------------------------------
#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int A[10][10],row,col,i,j,sum=0;

    cout<<"Enter Number of rows and column for the matrix: ";
    cin>>row>>col;

    // Taking input for the matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"]= ";
            cin>>A[i][j];
        }
        cout<<endl;
    }


    // Printing That matrix
    cout<<"\nMatrix: "<<endl;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<"\t";
            cout<<A[i][j];
        }
        cout<<endl;
    }

    // Taking input for the matrix
    cout<<"Diagonal Elements: \n";
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if (i==j)
            {
                cout<<"\t\t A["<<i<<"]["<<j<<"]= ";
                cout<< A[i][j];
                sum=sum + A[i][j];
            }
        }
        cout<<endl;
    }
    cout<<"Sum of diagonal elements: "<<sum;
    
    getch();
}
