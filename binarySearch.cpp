#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key)
{
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
            
        if(key>arr[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid =(start+end)/2;

    }
    return -1;
}
int main()
{
    int even[6]={2,4,6,34,39,76};//here is maintain to enter array value in and proper oreder increasing or decreasing order
    int odd[5]={2,4,7,9,54};//here is also noticed this type 
    
    int index = binarySearch(odd,5,4);
    int index1 = binarySearch(even,6,34);
    cout<<"even array in element is: "<<index1<<"th "<<"index"<<endl;
    cout<<"odd array in element is: "<<index<<"th "<<"index"<<endl;
}