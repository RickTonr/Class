#include<bits/stdc++.h>
using namespace std;
int delNum(int* p,int n,int x);
int main(){
    int n,a[100],x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    int m=delNum(a,n,x);
    for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
int delNum(int* p,int n,int x){
    int j=0;
    for(int i=0;i<n;i++){
        if(p[i]!=x){
            p[j]=p[i];
            j++;
        }
    }
    return j;
}