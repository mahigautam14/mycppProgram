#include<iostream>
using namespace std;
void swapAlternate(int arr[],int size)
{
    for(int i=0;i<=size;i+=2)
    {
        if(i+1<size)
            swap(arr[i],arr[i+1]);
    }
}
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[8]={34,5,644,7,-9,90,-98,700};
    int brr[5] = {45,67,-56,0,89};
    swapAlternate(arr,8);
    printArray(arr,8);
    swapAlternate(brr,5);
    printArray(brr,5);
}