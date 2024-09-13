#include<iostream>
using namespace std;
int selectionSort(int * arr,int n)
{
    int minIndex;
    for(int i=0;i<n-1;i++)
    {
        minIndex =  i;
        for(int j = i+1; j<n;j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
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
    int arr[5]={34,6,4,3,45};
    selectionSort(arr,5);
    printArray(arr,5);

}