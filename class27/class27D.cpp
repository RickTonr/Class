#include <iostream>
using namespace std;
int main()
{	
	int n,t;
	cin>>n;
	int num[1000]={0};//num[i]存放值为i的个数
	for (int i=0;i<n;++i) 
	{
		cin>>t;
		// Replace placeholder with appropriate code
		num[t]++;
	}
	int ans=0;
	for(int i=1;i<1000;++i)
	{
		if(num[i]>=num[ans])
			// Replace placeholder with appropriate code
			ans = i;
	}
	cout<<ans;
    return 0;
}