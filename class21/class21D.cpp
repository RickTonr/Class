#include <iostream>
using namespace std;

// 递归函数，将十进制数转换为八进制数
void tenToEight(int ten)
{
    if (ten > 0)
    {
        tenToEight(ten / 8);  // 递归调用：将除以8的结果继续转换为八进制数
        cout << ten % 8;      // 输出当前位的八进制数（余数）
    }
}

int main()
{
    int ten;
    cin >> ten;                // 从输入获取一个十进制数
    tenToEight(ten);           // 调用递归函数，将十进制数转换为八进制数
    
    return 0;
}
