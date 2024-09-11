#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter row number: ";
    cin>>n;
    int k=1;
    for(int row=1;row<=n;row++)
    {
        k=row;
        for(int space=1;space<=row;space++)
        {
            cout<<" ";
        }
        for(int col=1;col<=n-row+1;col++,k++)
        {
            cout<<k;
        }
        cout<<endl;
    }
}