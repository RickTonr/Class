#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int zjs;
    if(n%2==1){
        zjs=n*n;
        zjs=zjs-2*(n/2);
        cout<<n<<"^3="<<zjs;
        zjs+=2;
        for(int i=1;i<n;i++){
            cout<<"+"<<zjs;
            zjs+=2;
        }
    }
    else{
        zjs=pow(n,3);
        int i=2;
        while(zjs/(i*n)-1-2*(i*n/2-1)>=1&&zjs%(i*n)==0&&zjs/(i*n)%2!=1){
            i*=2;
        }
        i/=2;
        zjs=zjs/(i*n)-1-2*(i*n/2-1);
        cout<<n<<"^3="<<zjs;
        zjs+=2;
        for(int j=1;j<i*n;j++){
            cout<<"+"<<zjs;
            zjs+=2;
        }
    }
    return 0;
}