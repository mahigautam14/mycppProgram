#include<iostream>
using namespace std;
int reverse(int arr[],int n)
{
    for(int start = 0,end = n-1;start<=end;start++,end--)
    {
        swap(arr[start],arr[end]);

    }
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int arr[6]={43,5,6,0,-4,90};
    int brr[5] ={-4,67,34,7,89};
    reverse(arr,6);
    reverse(brr,5);
    printArray(arr,6);
    printArray(brr,5);

}