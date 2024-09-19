#include<iostream>
using namespace std;
int sort(int arr[],int n)
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
int binarySearch(int arr[],int size,int key)
{
    int s=0,e=size-1;
    int mid = (s+e)/2;
    while(s<=e)
    {
        if(arr[mid] == key)
            return key;
        if(arr[mid]<key)
            s = mid+1;
        if(arr[mid]>key)
            e = mid-1;
        mid = (s+e)/2;    
    }
    return -1;
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
    int arr[5],i,key;

    cout<<"Enter 5 numbers for array: ";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Enter key for search in that array: ";
    cin>>key;
    cout<<"After sorting: "<<sort(arr,i)<<endl;
    printArray(arr,i);
    if(binarySearch(arr,i,key) == key)
        cout<<"Found";
    else
        cout<<"Not found";    

}
