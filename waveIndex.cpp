#include <iostream>
using namespace std;
int waveRow(int arr[][4],int Nrow,int Ncol)
{
    cout << "Here is your wave form:- " << endl;
    for (int col = 0; col < Ncol; col++)
    {
        if (col & 1)
        {
            for (int row = Nrow-1; row >=0; row--)
            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            for (int row = 0; row < Nrow; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int arr[4][4];
    cout << "Enter row and columns:- " << endl;

    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }
    cout << "here is your row and columns:- " << endl;

    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    waveRow(arr,4,4);
    
}