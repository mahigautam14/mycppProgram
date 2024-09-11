#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter row number: ";
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n-row+1;col++)
        {
            cout<<col;
        }
        
         for(int col=1;col<=row;col++)
        {
            cout<<"*";
        }
        for(int start = row-1;start;start--)
        {
            cout<<"*";
        }
        // cout<<endl;
        for(int second =n-row+1;second;second--)
        {
            cout<<second;
        }
        cout<<endl;
    }
    
    
}