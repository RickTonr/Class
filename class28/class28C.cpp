#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d,ans1=0,ans2=0;
	cin>>a>>b>>c>>d;
	while(a>0){
		if(a%10==b){
			ans1=ans1*10+b;
		}
		a/=10;
	}
	while(c>0){
		if(c%10==d){
			ans2=ans2*10+d;
		}
		c/=10;
	}
	cout<<ans1+ans2<<endl;
	return 0;
}