//不用描述了，自己运行就知道了，这道图给我自己气笑了
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[j][i]=0;
        }
    }
    int k=1;
    for(int i=1;i<n;i++){
        for(int j=n-1;j>=i;j--){
            a[j][j-i]=k;
            k++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<fixed<<setw(4)<<a[i][j];
        }
        cout<<endl;
    }
}