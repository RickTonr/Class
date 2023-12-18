#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 结构体定义，表示一个数字及其原始索引
struct numberIndex
{
    int num;   // 数字值
    int index; // 原始索引
};

// 比较函数，用于排序，按照数字值升序排列
bool compareFuc(numberIndex a, numberIndex b)
{
    return a.num <= b.num;
}

int main()
{
    int n, num;
    cin >> n;

    // 存储数字及其索引的 vector
    vector<numberIndex> lis;

    // 输入数字并将其及索引存入 vector
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        lis.push_back({num, i});
    }

    // 使用排序函数对 vector 进行排序，按照数字值升序排列
    sort(lis.begin(), lis.end(), compareFuc);

    // 输出排序后的数字及其索引
    for (int i = 0; i < n; i++)
    {
        cout << lis[i].num << '(' << lis[i].index + 1 << ") ";
    }

    return 0;
}
