//输入n<100，表示将输入正整数的个数，然后输入这n个数，每个数的取值范围为1~1000。输出这n个数按如下规则排序后的结果，每两个数间空一格。

//若两数奇偶性不同，偶数在前。若奇偶性相同，各位数字和小的在前。若奇偶性及数字和均相同，数值小的在前。
#include<bits/stdc++.h>
using namespace std;
bool pd(int a){
    if(a%2==0) return true;
    else return false;
}
int gw(int a){
    int sum=0;
    while(a){
        sum+=a%10;
        a/=10;
    }
    return sum;
}
bool cmp(int a, int b){
    if(pd(a) && !pd(b)) return true;
    else if(!pd(a) && pd(b)) return false;
    else if(pd(a) && pd(b)&&gw(a)!=gw(b)) return gw(a) < gw(b);
    else if(!pd(a) && !pd(b)&&gw(a)!=gw(b)) return gw(a) < gw(b);
    else return a<b;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}