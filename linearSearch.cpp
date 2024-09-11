#include<iostream>
using namespace std;
bool search(int arr[],int size,int key)
{
    for(int i=0;i<=size;i++)
    {
        if(arr[i]== key)
            return 1;
    }
    return 0;
}
int main()
{
    int arr[5]={2,42,2,-4,5};
    int key;
    cout<<"Enter key for your search: ";
    cin>>key;
    bool found = search(arr,5,key);
    if(found ==1)
        cout<<"found in the given array";
    else
        cout<<"Not found in the given array";    
}