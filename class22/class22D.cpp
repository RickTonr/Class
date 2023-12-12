#include<bits/stdc++.h>
//组合数
using namespace std;
float zuheshu(float n, float m){
    if(m==1) return n/m;
    else return n/m*zuheshu(n-1, m-1);
}
int main(){
    float n, m;
    while(cin >> n >> m)
        cout << zuheshu(n, m) << endl;
    return 0;
}