#include<iostream>
using namespace std;
int f(int x,int q,int n) 
{
    if(x<n || q<1) return 0;
    else
	{
        int re=x-n;
        int req=q-1;
        return 1+f(re+1,req,n);
    }
}
int main()
{
	int x,q,n;
	while(cin>>x>>q>>n)
	cout<<"Ans = "<<f(x,q,n)<<endl;
}