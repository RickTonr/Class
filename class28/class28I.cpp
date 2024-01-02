// 尼克斯彻定理：任何一个大于等于1的整数的立方等于一串连续奇数之和，如：
// 1^3=1
// 2^3=3+5
// 3^3=7+9+11
// 4^3=1+3+5+7+9+11+13+15
// 输入
// 输入一个正整数n,  1<=n<=100
// 输出
// 输出满足条件的等式，答案唯一，保证最开始的第一个数尽量小
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int ans=1,sum=0;
    cin>>n;
    int zjs=pow(n,3);
    for(int i=1;i<=n*n*n;i+=2){
        sum=0;
        int t=i;
        while(sum!=n*n*n){
            sum+=t;
            t+=2;
            if(sum>n*n*n){
                break;
            }
        }
        if(sum==n*n*n){
            ans=i;
            break;
        }
        else continue;
    }
    cout<<n<<"^3="<<ans;
    sum=ans;
    while(sum!=n*n*n){
        ans+=2;
        cout<<"+"<<ans;
        sum+=ans;
    }
}