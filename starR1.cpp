#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter row number: ";
    cin>>n;
    for(int row =1;row<=n;row++)
    {
        for(int space=1;space<=row;space++)
        {
            cout<<" ";
        }
        for(int col=1;col<=n-row+1;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}   