#include<bits/stdc++.h>
using namespace std;
//编写程序，读一个字母在C和X之间的字符，打印出该字母在中间的相邻五个字母
int main(){
    char a;
    string t;
    cin>>t;
    for(int i=0;i<t.length();i++){
        if(t[i]>='C'&&t[i]<='X'){
            a=t[i];
            break;
        }
    }
    cout<<char(a-2)<<char(a-1)<<a<<char(a+1)<<char(a+2)<<endl;
}