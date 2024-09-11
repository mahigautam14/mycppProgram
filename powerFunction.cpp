#include<iostream>
using namespace std;
int power()
{ 
    int ans =1,a,b;
    cout<<"\nEnter two numbers: ";
    cin>>a>>b;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main()
{
    // int a,b;
    // cout<<"Enter two numbers for power: ";
    // cin>>a>>b;
    cout<<"Power is: "<<power();
    cout<<"power = "<<power();
}