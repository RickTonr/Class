#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// 计算一个数的各位数字和
int sumN(int num) {
    int result = 0;
    while (num) {
        result += num % 10;
        num /= 10;
    }
    return result;
}

// 结构体定义，表示一个数字及其各位数字和
struct numberIndex {
    int num;      // 数字值
    int numSum;   // 各位数字和
};

// 比较函数，用于排序
bool compareFuc(numberIndex a, numberIndex b) {
    // 先按照奇偶性降序排序
    if ((a.num - b.num) % 2) {
        return b.num % 2;
    }
    // 如果奇偶性相同，则按各位数字和升序排序
    if (a.numSum == b.numSum) {
        return a.num < b.num;
    }
    // 如果各位数字和相同，则按数字值升序排序
    return a.numSum < b.numSum;
}

int main() {
    int n, num;
    cin >> n;

    // 存储数字及其各位数字和的 vector
    vector<numberIndex> lis;

    // 输入数字并将其及各位数字和存入 vector
    for (int i = 0; i < n; i++) {
        cin >> num;
        lis.push_back({num, sumN(num)});
    }

    // 使用排序函数对 vector 进行排序
    sort(lis.begin(), lis.end(), compareFuc);

    // 输出排序后的数字
    for (int i = 0; i < n; i++) {
        cout << lis[i].num << " ";
    }

    return 0;
}
