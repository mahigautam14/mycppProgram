#include<iostream>
using namespace std;
int main()
{
    int mask =0,n;
    cout<<"Enter test cases: ";
    cin>>n;
    int m=n;
    while(m){
        mask=(mask<<1)|1;
        m=m>>1;
    }
    int ans=(~n)& mask;
    cout<<ans<<endl;
}