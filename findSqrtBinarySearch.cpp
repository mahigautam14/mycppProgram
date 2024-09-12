#include<iostream>
using namespace std;
int sqrt(int n)
{
    int s = 0;
    int e = n;
    double mid = s+(e-s)/2;
    double ans = -1;
    while(s<e)
    {
        int square  = mid*mid;
        if(square == n)
            return mid;
        if(square<n)
        {
            ans = mid;
            s =mid+1;
        }   
        else
            e =mid;
        mid = s+(e-s)/2;

    }
    return ans;
}
double morePrecision(int n,int precision,int tempsol){
    double factor = 1;
    double ans = tempsol;
    for(int i = 0;i<precision;i++)
    {
        factor = factor/10;
        for(double j = ans;j*j<n;j+=factor){
            ans =j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter a number for square root: ";
    cin>>n;
    int  temsol = sqrt(n);
    cout<<"Answer is: "<<morePrecision(n,4,temsol)<<endl;
    return 0;
}