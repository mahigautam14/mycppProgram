#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int>& arr){
    int s = 0;
    int re = arr.size()-1;
    while(s<re){
        swap(arr[s++],arr[re--]);
    }
    return arr;
}
vector<int> arraySum(vector<int>& a,int n,vector<int>& b,int m){
    int i=n-1;
    int j = m-1;
    vector<int> ans;
    int carry = 0;
    while(i>=0 && j>=0){
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1+val2+carry;
        carry = sum/10;
        sum%=10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while(i>=0){
        int val1 = a[i];
        int sum = a[i]+carry;
        carry = sum/10;
        sum%=10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0){
        int val2 = b[j];
        int sum = b[j]+carry;
        carry = sum/10;
        sum%=10;
        ans.push_back(sum);
        j--;
    }
    while(carry != 0){
        int sum = carry;
        carry = sum/10;
        sum%=10;
        ans.push_back(sum);
    }
    return reverse(ans);
}
void printArray(vector<int>& arr){
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> arr = {3,5,3,23};
    vector<int> arr1 ={3,4,5,6};
    vector<int> ans = arraySum(arr,4,arr1,4);
    printArray(ans);
}