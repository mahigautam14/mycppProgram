#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter row number: ";
    cin>>n;
    int row = 1;
    while(row<=n){
        int col=1;
        while(col<=row){
            char ch = 'A'+col-1;
            cout<<ch;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}