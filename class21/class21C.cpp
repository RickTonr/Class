#include<iostream>
using namespace std;

const int N = 110000, P = 10007;
int n;
int a[N], len;
int ans;

// 辅助函数：计算约数
void getDivisor()
{
    len = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            a[++len] = i;  // 将因子 i 加入数组
            if (n / i != i) 
                a[++len] = n / i;  // 将因子 n/i 加入数组（确保不重复）
        }
    }
}

// 辅助函数：计算最大公约数
int gcd(int a, int b)
{
    if (b == 0) 
        return a;  // 当 b 为 0 时，a 即为最大公约数
    return gcd(b, a % b);  // 使用辗转相除法计算最大公约数
}

int main()
{
    cin >> n;
    getDivisor();  // 获取 n 的所有约数
    ans = 0;
    
    // 计算所有约数两两之间的最大公约数之和
    for (int i = 1; i <= len; i++)
    {
        for (int j = i + 1; j <= len; j++)
        {
            ans = (ans + gcd(a[i], a[j])) % P;  // 更新最大公约数之和并取余
        }
    }
    
    cout << ans << endl;  // 输出结果
    return 0;
}
