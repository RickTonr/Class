#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// 计算一个数中含有多少个数字7
int count7(int num) {
    int result = 0;
    while (num) {
        if (num % 10 == 7) {
            result++;
        }
        num /= 10;
    }
    return result;
}

// 结构体定义，表示一个数字及其包含数字7的个数
struct numberIndex {
    int num;          // 数字值
    int countSeven;   // 包含数字7的个数
};

// 比较函数，用于排序
bool compareFuc(numberIndex a, numberIndex b) {
    // 先按照包含数字7的个数降序排序
    if (a.countSeven == b.countSeven) {
        // 如果包含数字7的个数一样，则按数字本身从小到大排序
        return a.num < b.num;
    }
    return a.countSeven > b.countSeven;
}

int main() {
    int n, num;

    // 输入爱妻数的个数
    cin >> n;

    // 存储数字及其包含数字7的个数的 vector
    vector<numberIndex> lis;

    // 输入爱妻数并将其及包含数字7的个数存入 vector
    for (int i = 0; i < n; i++) {
        cin >> num;
        lis.push_back({num, count7(num)});
    }

    // 使用排序函数对 vector 进行排序
    sort(lis.begin(), lis.end(), compareFuc);

    // 输出排序后的爱妻数
    for (int i = 0; i < n; i++) {
        cout << lis[i].num << ' ';
    }

    return 0;
}
