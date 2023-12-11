#include<iostream>
#include<iomanip>
using namespace std;

// 递归函数，实现汉诺塔移动过程
// 参数说明：n表示圆盘的数量，index1表示起始塔座，index2表示目标塔座
void hanoi(int n, int index1, int index2) {
    // 递归终止条件：当n大于1时
    if (n > 1) {
        // 递归步骤1：将n-1个圆盘从index1移动到剩余的塔座（6 - index1 - index2为剩余塔座的编号）
        hanoi(n - 1, index1, 6 - index1 - index2);
        
        // 输出移动的步骤：将编号为n的圆盘从index1移动到index2
        cout << n << ' ' << (char)('A' - 1 + index1) << ' ' << (char)('A' - 1 + index2) << endl;

        // 递归步骤2：将n-1个圆盘从剩余的塔座移动到目标塔座
        hanoi(n - 1, 6 - index1 - index2, index2);
    } else {
        // 当n等于1时，直接输出移动的步骤
        cout << n << ' ' << (char)('A' - 1 + index1) << ' ' << (char)('A' - 1 + index2) << endl;
    }
}

int main() {
    int n, index1, index2;
    char s1, s2;
    cin >> n >> s1 >> s2;
    
    // 将输入的字符映射为塔座的编号（1、2、3分别代表A、B、C）
    //此处使用1，2，3来分别代表A，B，C，书写起来略麻烦但便于理解
    index1 = s1 - 'A' + 1;
    index2 = s2 - 'A' + 1;

    // 调用递归函数，输出最优移动方案
    hanoi(n, index1, index2);

    return 0;
}