#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter row number: ";
    cin>>n;
    int k=1;
    for(int row=1;row<=n;row++,k++)
    {
        for(int space=n-row+1;space;space--)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<k;
        }
        cout<<endl;
    }
}