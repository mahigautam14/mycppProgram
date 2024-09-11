#include<iostream>
using namespace std;
int findUnique(int arr[],int size)
{
    int ans = 0;
    for(int i=0;i<size;i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}
int main()
{
    int arr[7]={3,4,5,4,3,5,2};
    cout<<"this is unique value in given array "<<findUnique(arr,7);
}