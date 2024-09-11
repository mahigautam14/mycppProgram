// #include<iostream>
// #include<math.h>
// using namespace std;
// int countBits(int a,int b){
//     int ans,ans1,i;
//     int count=0,count1=0;
//     for(i=0;a;i++,a=a>>1){
//         int bit = a&1;
//         ans = (bit * pow(10,i))+ans;
//         // n=n >> 1;
//     }
//     for(i=0;i<=a;i++,a=a>>1){
//         ans = a&1;
//         if(ans==1)
//             count++;    
//     }
//     i=0;
//     for(i=0;i<=b;i++,b=b>>1){
//         ans1 = b&1;
//         if(ans1==1)
//             count1++;
              
//     }
//     return (count1+count);
// }
// int main(){
//     int ans;
//     ans = countBits(5,3);
//     cout<<ans;
// }