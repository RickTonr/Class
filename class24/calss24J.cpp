// 海滩上有一堆鱼，N只小猫来分。第一只小猫把这堆鱼平均分为N份，多了i<N个，这只小猫把多的i个扔入海中，拿走了一份。第二只小猫接着把剩下的鱼平均分成N份，又多了i个，小猫同样把多的i个扔入海中，拿走了一份。第三、第四、....，第N只小猫仍是最终剩下的鱼分成N份，扔掉多了的i个，并拿走一份。
// 编写程序，输入小猫的数量N以及每次扔到海里的鱼的数量i，输出海滩上最少的鱼数，使得每只小猫都可吃到鱼。
// 例如：两只小猫来分鱼N=2，每次扔掉鱼的数量为i=1，为了每只小猫都可吃到鱼，可令第二只小猫需要拿走1条
// 鱼，则此时待分配的有3条鱼。第一只小猫待分配的鱼有3*2+1=7条。
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;;i++){
        int ans=i*n+m;
        for(int j=1;j<n;j++){
            if(ans%(n-1)!=0){
                ans=-1;
                break;
            }
            ans=ans/(n-1)*n+m;
        }
        if(ans!=-1){
            cout<<ans<<endl;
            break;
        }
    }
}