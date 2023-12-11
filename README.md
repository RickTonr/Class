# Class#include <iostream>
using namespace std;

// 递归函数，计算正整数 n 的每位数字之和
int f(int n)
{
    int x = n / 10;   // B: 通过除以10获取 n 的除个位以外的部分
    if (x == 0)
        return n;     // 当 n 小于10时，直接返回 n，即 n 是个位数，递归的终止条件
    else
    {
        int y = n % 10;    // A: 获取 n 的个位数
        return y + f(x);   // C: 将个位数 y 与递归调用的结果（去除个位数后的部分的数字之和）相加
    }	
} 

int main(){
    int n;
    cin >> n;
    cout << f(n);   // 输出正整数 n 的每位数字之和
}
