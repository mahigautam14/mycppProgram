#include<iostream>
using namespace std;
bool isEven(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    return (n&1)?0:1;   
}
int main(){
    if(isEven())
        cout<<"Even";
    else
        cout<<"Odd";    
    
}