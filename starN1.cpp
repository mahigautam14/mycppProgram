#include<iostream>
using namespace std;
int main()
{
    int n,k=1;
    cout<<"Enter row number: ";
    cin>>n;
    // int m=n;
    for(int row=1;row<=n;row++,k++)
    {
        for(int space = 1;space<=row;space++)
        {
            cout<<" ";
        }
        for(int col=1;col<=n-row+1;col++)
        {
            cout<<k;
        }
        cout<<endl;
    }
}