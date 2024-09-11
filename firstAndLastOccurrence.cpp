#include<iostream>
using namespace std;
int firstocc(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int ans = -1;
    int mid = start +(end-start)/2;
    while(start<=end){
        if(arr[mid] == key)
        {
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid]<key)
            start = mid+1;
        else 
            end = mid-1;    
        mid = start+(end-start)/2;
    }
    return ans;
}
int lastocc(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int ans = -1;
    int mid = start +(end-start)/2;
    while(start<=end){
        if(arr[mid] == key)
        {
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid]<key)
            start = mid+1;
        else 
            end = mid-1;    
        mid = start+(end-start)/2;
    }
    return ans;
}
int main()
{
    int arr[10]={2,4,5,6,7,7,7,7,7,8};
    int index = firstocc(arr,10,7);
    int index1 = lastocc(arr,10,7);
    cout<<"first occurence of 7 at index: "<<index<<" and  second accurence of 7 at index: "<<index1<<endl;
    return 0;
}