#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	char a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	char b;
	cin>>b;
	bool f=false;
	int wz=0;
	for(int i=0;i<n;i++){
		if(a[i]==b){
			wz=i;
			f=true;
		}
	}
	if(f){
		cout<<n-wz;
	}
	else{
		cout<<0;
	}
	return 0;
}