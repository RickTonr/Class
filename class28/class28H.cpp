// 第一行输入一个正整数n, 2<=n<=10
// 第二行输入n个空格隔开的正整数，每个数的取值范围为1~100
// 第一行输出所有元素的最小公倍数t， t的值不会超过100000000
// 第二行输出t的所有质数因子，并按因子个数从大到小排序，如果个数一样，则按因子本身从大到小排序
// 比如输入为
// 3
// 27 28 39
// 则第一行输出
// 3780
// 第二行输出
// 3: 3, 2: 2, 7: 1, 5: 1
// 表示3个3,2个2,1个7,1个5
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int gbs(int n,int* num){
    int ans=0,min=1000000000;
    for(int i=0;i<n;i++){
        if(num[i]<min) min=num[i];
    }
    for(ans=min;;ans+=min){
        int i;
        for(i=0;i<n;i++){
            if(ans%num[i]!=0) break;
        }
        if(i == n) return ans;
    }
}
struct node{
    int num;
    int cnt;
};
bool cmp(node a,node b){
    if(a.cnt==b.cnt) return a.num>b.num;
    else return a.cnt>b.cnt;
}
int main(){
    int n;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++) cin>>num[i];
    int t=gbs(n,num);
    cout<<t<<endl;
    node a[1000];
    int x=0;
    for(int i=2;i<=t;i++){
        if(isPrime(i)){
            int cnt1=0;
            while(t%i==0){
                cnt1++;
                t/=i;    
            }
            a[x].num=i;
            a[x].cnt=cnt1;
            x++;
        }
    }
    sort(a,a+x,cmp);
    cout<<a[0].num<<": "<<a[0].cnt;
    for(int i=1;i<x;i++){
        if(a[i].cnt!=0) cout<<", "<<a[i].num<<": "<<a[i].cnt;
    }
}