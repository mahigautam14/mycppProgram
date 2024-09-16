#include<iostream>
#include<vector>
using namespace std;
void reverseString(char s[],int n) {
        int start = 0;
        int end = n-1;
        while(start<=end){
            swap(s[start++],s[end--]);
        }
}
int getLength(char name[]){
    int count = 0;
    for(int i = 0;name[i];i++,count++);
    return count;
}

int main()
{
    char name[20];
    cout<<"enter your name: ";
    cin>>name;
    cout<<"Your name length is: "<<getLength(name)<<endl;
    int len = getLength(name);
    reverseString(name,len);
    cout<<"Reverse string is: "<<name;

}