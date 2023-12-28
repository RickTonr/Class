#include<bits/stdc++.h>
using namespace std;
int main(){
    int denominator,flag,i,n;
    float item,sum;
    cin>>n;
    denominator=1;
    flag=1;
    sum=0;
    for(i=1;i<=n;i++){
        item=flag*1.0/denominator;
        sum=sum+item;
        flag=-flag;
        denominator=denominator+2;
    }
    cout<<"sum="<<sum<<endl;
    return 0;
}