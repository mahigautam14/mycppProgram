#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter row number: ";
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int space=n-row;space;space--)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}