#include<bits/stdc++.h>
using namespace std;
long long flag[1010]={0,1,1};
long long fff(int n){
    if(flag[n]!=0) return flag[n];
    flag[n]=fff(n-1)*fff(n-2)%1000000007+1;
    return flag[n];
}
int main(){
    int n,b;
    cin>>n;
    while(n--){
        cin>>b;
        cout<<fff(b)<<endl;
    }
}
