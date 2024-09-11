#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter row number: ";
    cin>>n;
    int row =1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<row;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}