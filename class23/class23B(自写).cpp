#include<bits/stdc++.h>
using namespace std;
struct numberIndex
{
    int num[100];
    int index[100];
};
int main(){
    int n;
    numberIndex stu;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>stu.num[i];
        stu.index[i]=i+1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(stu.num[j]>stu.num[j+1]){
                swap(stu.num[j],stu.num[j+1]);
                swap(stu.index[j],stu.index[j+1]);
            }
            else if(stu.num[j]==stu.num[j+1]){
                if(stu.index[j]<stu.index[j+1]){
                    swap(stu.index[j],stu.index[j+1]);
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<stu.num[i]<<"("<<stu.index[i]<<") ";
    }
    return 0;
}