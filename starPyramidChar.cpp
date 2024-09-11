#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter row number: ";
    cin>>n;
    char k='A';
    for(int row=1;row<=n;row++)
    {
        for(int space =n-row;space;space--)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<k;
        }
        for(int start = row-1;start;start--,k++)
        {
            cout<<k;
        }
        cout<<endl;
    }
}