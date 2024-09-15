#include<iostream>
using namespace std;
void mergeArray(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i = 0,j =0,k = 0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];    
    }
    while(i<n){
        arr3[k++] = arr1[i++];
    }
    while(j<m){
        arr3[k++] = arr2[j++];
    }

}
void printArray(int arr[],int m){
    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int arr1[5]={3,5,6,9,10};//this is require in sorted order
    int arr2[5] = {1,2,3,4,6};//this is also require in shorted order
    int arr3[9] = {0};
    mergeArray(arr1,5,arr2,5,arr3);
    printArray(arr3,10);

}