#include<bits/stdc++.h>
using namespace std;
int swh(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=swh(a[i]);
    }
    //冒泡排序
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(b[j]<b[j+1]){
                swap(b[j],b[j+1]);
                swap(a[j],a[j+1]);
            }
            else if(b[j]==b[j+1]){
                if(a[j]<a[j+1]){
                    swap(a[j],a[j+1]);
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}