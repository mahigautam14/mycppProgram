#include<iostream>
#include<stdlib.h>
using namespace std;
void bubbleSort(int *arr,int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])

                swap(arr[j],arr[j+1]);
        }
    }   
}
void printArray(int *arr,int n){
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[5]={34,65,7,89,1};
    bubbleSort(arr,5);
    printArray(arr,5);
}