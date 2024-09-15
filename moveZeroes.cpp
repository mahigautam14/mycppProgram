#include<iostream>
#include<vector>
using namespace std;
vector<int> moveZeroes(vector<int>& num)
{
    int nonZero = 0;
    for(int j = 0;j<num.size();j++){
        if(num[j]!= 0)
            swap(num[j],num[nonZero++]);
    }

}
void display(vector<int>& num)
{
    for(int i=0;i<num.size();i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> num = {3,4,0,2,4,0,6,0};
    moveZeroes(num);
    display(num);
}