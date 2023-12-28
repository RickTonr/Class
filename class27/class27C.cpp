#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	int a[x][y];
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<x;i++){
		int t=a[i][y-1];
		for(int j=0;j<y;j++){
			a[i][j]=a[i][j]/t;
		}
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<setw(3)<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}