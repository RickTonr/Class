//已知f(1.5)>0 ,f(2.4)<0,f(x)在[1.5,2.4]区间内单调，并且方程f(x)=0 在区间[1.5,2.4] 有且只有一个根，请用二分法求出该根。
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double l=1.5,r=2.4;
    double mid;
    while(r-l>1e-6
    ){
        mid=(l+r)/2;
        if(pow(mid,5)-15*pow(mid,4)+85*pow(mid,3)-225*pow(mid,2)+274*mid-121>0){
            l=mid;
        }
        else{
            r=mid;
        }
    }
    cout<<fixed<<setprecision(6)<<mid<<endl;
    return 0;
}