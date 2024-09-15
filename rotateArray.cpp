#include<iostream>
#include<vector>
using namespace std;
void rotateArray(vector<int>& num,int k){
    vector<int> temp(num.size());
    for(int i=0;i<num.size();i++){
        temp[(i+k)%num.size()] = num[i];
    }
    num = temp;
}
void printArray(vector<int>& num,int k){
    for(int i=0;i<num.size();i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> arr={4,5,6,34,3};
    rotateArray(arr,2);
    printArray(arr,2);
}