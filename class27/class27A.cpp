#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(n%i==0&&n%(i+1)==0){
			cout<<"("<<i<<","<<i+1<<")"<<endl;
		}
	}
	return 0;
}