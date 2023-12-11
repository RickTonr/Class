#include<iostream>
#include<iomanip>
using namespace std;
int m,n,a[100];
// 输出拆分形式的函数
void pr()
{
    cout << m << "=";  // 输出等式的左侧
    for (int i = n; i >= 2; i--)
        cout << a[i] << "+";  // 输出等式的右侧
    cout << a[1] << endl;  // 输出最后一项，并换行
}

// 递归函数，实现拆分过程
// 参数说明：x表示待拆分的数，y表示还需拆分的项数
void fen(int x, int y)
{
    if (y == 1)
    {
        a[1] = x;  // 当只剩下一项时，直接将剩余数赋值给第一项
        pr();      // 输出拆分形式
    }
    else
    {
        for (int i = 1; i <= x - y + 1; i++)
        {
            a[y] = i;         // 将当前拆分的数赋值给第y项
            fen(x - i, y - 1); // 递归调用，拆分剩余数和减少剩余项数
        }
    }
}

int main()
{
    cin >> m >> n;  // 从用户输入获取整数m和n
    fen(m, n);      // 调用递归函数，实现拆分
    return 0;
}
