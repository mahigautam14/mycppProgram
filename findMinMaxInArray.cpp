#include<iostream>
using namespace std;
int MinArray(int num[],int n){
    int min;
    for(int i=0;i<n;i++){
        // mini = min(mini,num[i]);// this is a min function to find min value in the array i taken variable mini instead of min
        if(num[i]<min)
            min = num[i];
    }
    return min;
}
int MaxArray(int num[],int n){
    int max=0;
    
    for(int i=0;i<n;i++){
        // maxi = max(maxi,num[i]); // this case to use max function i taken varaible maxi instead of max
        if(num[i]>max)
            max = num[i];
    }
    return max;
}
int main(){
    int size,i;
    cout<<"Enter size of numbers: ";
    cin>>size;  
    int arr[100];
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"max value = "<<MaxArray(arr,size)<<endl;
    cout<<"min value = "<<MinArray(arr,size)<<endl;
}