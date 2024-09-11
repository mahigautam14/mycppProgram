#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter binary number: ";
    cin>>n;
    int i,sum = 0;
    for(i=0;n;i++,n = n/10)
    {
        int digit = n%10;
        if(digit==1){
            sum+=pow(2,i);
        }

    }
    cout<<sum<<endl;
}