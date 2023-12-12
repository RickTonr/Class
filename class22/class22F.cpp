#include<bits/stdc++.h>
using namespace std;
//Hermite 多项式
double H(int n, double x){
    if(n==0) return 1;
    if(n==1) return 2*x;
    return 2*x*H(n-1,x)-2*(n-1)*H(n-2,x);
}
int main(){
    int n;
    double x;
    cin>>n>>x;
    cout<<fixed<<setprecision(2)<<H(n,x)<<endl;
    return 0;
}