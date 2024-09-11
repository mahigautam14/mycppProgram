#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int bit, i,n,ans=0;
    cout<<"Enter a number for convert to binary: ";
    cin>>n;
    for(i=0;n;i++,n=n>>1){
        bit = n&1;
        ans = (bit * pow(10,i))+ans;
        // n=n >> 1;
    }
    cout<<ans<<endl;
}