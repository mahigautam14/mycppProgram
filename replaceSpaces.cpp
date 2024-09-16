#include<iostream>
#include<vector>
using namespace std;
string replace(string &str){
    string temp = "";
    for( int i=0;i<str.length();i++){
        if(str[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');

        }
        else
            temp.push_back(str[i]);
    }
    return temp;
}
void printString(string &str){
    for(int i=0;str[i];i++)
    {
        cout<<str[i];
    }
    cout<<endl;

}
int main()
{
    string s = "my name is mahi";
    // cout<<"Enter a string: ";
    // cin>>s;
    string ans = replace(s);
    printString(ans);
}