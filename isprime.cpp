#include<iostream>
using namespace std;

bool isPrime(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i == 0)
        {
            return 0;
            break;
        }
    }
    return 1;
}

int main()
{
    int a,b;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<(isPrime(a)?"prime":"not a prime");
}