#include <iostream>
#include <vector>
using namespace std;
vector<int> Reverse(vector<int> v, int m)
{
    int s = m+1;
    int e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

void printArray(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> ve;
    ve.push_back(4);
    ve.push_back(45);
    ve.push_back(77);
    ve.push_back(7);
    ve.push_back(4);
    ve.push_back(9);
    vector<int> ans = Reverse(ve, 1);
    printArray(ans);
    return 0;
}