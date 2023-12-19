// 3.2.2 输入描述
// 第一行一个整数 N。保证1≤N≤5×101
// 接下来一行N 个用空格隔开的整数，依次为u1,42,..,UN，表示你的马匹们的速度。保证1Su4≤2N。
// 接下来一行N个用空格隔开的整数，依次为1,V,….,UN，表示田忌的马匹们的速度。保证1≤w≤2N。
// 3.2.3输出描述
// 输出一行，表示你最多能获胜几轮。
#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    sort(a,a+n,cmp);
    sort(b,b+n,cmp);
    int sum=0;
    for(int i=0,j=0;i<n,j<n;){
        if(a[i]>b[j]){
            sum++;
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    cout<<sum<<endl;
}