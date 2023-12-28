#include<bits/stdc++.h>
using namespace std;
struct qs{
    int a[3];
};
int main(){
    qs q[100];
    int i=0,ans;
    while(cin>>q[i].a[0]>>q[i].a[1]>>q[i].a[2]){
        i++;
    }
    for(int x=0;x<i;x++){
        ans=0;
        while(q[x].a[0]/q[x].a[2]>0&&q[x].a[1]>=q[x].a[0]/q[x].a[2]){
            int t=q[x].a[0]/q[x].a[2];
            ans+=t;
            q[x].a[0]=q[x].a[0]%q[x].a[2];
            q[x].a[0]+=t;
            q[x].a[1]-=t;
        }
        cout<<"Ans"<<" = "<<ans<<endl;
    }
    return 0;
}