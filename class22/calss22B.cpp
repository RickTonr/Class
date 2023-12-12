#include<bits/stdc++.h>
using namespace std;
int bt(double n){
    int sum = 0;
    if(n>=0&&n<=3) sum+=200;
    else if(n>3&&n<=5) sum+=200+(n-3)*20;
    else if(n>5) sum+=200+2*20+(n-5)*30;
    return sum;
}
int main(){
    double n;
    cin>>n;
    cout<<bt(n)<<endl;
    return 0;
}