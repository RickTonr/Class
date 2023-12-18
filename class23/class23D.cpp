#include<iostream>
using namespace std;

// 结构体定义，表示日期
struct Date
{
    int year, month, day;
};

// 比较日期的函数，用于排序
int dateCompare(const Date* dp1, const Date* dp2)
{
    int t = dp1->year - dp2->year;
    if (t == 0) t = dp1->month - dp2->month; // 如果年份相等，比较月份
    if (t == 0) t = dp1->day - dp2->day; //  如果月份相等，比较日期
    return t;
}

// 排序日期数组的函数
// 其余题目中algorithm中的sort与这里sort同理
void sort(Date* p, int n) //  接收一个日期数组和数组长度
{
    for (int i = 0; i < n - 1; i++)
    {
        int k = i;
        for (int j = i + 1; j < n; j++) // 内层循环遍历剩余日期
            if (dateCompare(&p[j], &p[k]) < 0) k = j; //  调用比较函数，找到最小日期的索引
        Date temp = p[i]; p[i] = p[k]; p[k] = temp; //  交换找到的最小日期和当前位置的日期
    }
}

int main()
{
    int n;
    cin >> n;

    // 动态分配存储日期的数组
    //Date* p = new Date[n]; //由于有delete[] p; 则选择此种写法
    Date p[n];//或者指针类型Date *p=new Date[n]; 但是没有delete[] p; 则选择此种写法
    // 输入日期数据
    for (int i = 0; i < n; i++)
        cin >> p[i].year >> p[i].month >> p[i].day;

    // 调用排序函数进行日期排序
    sort(p, n);

    // 输出排序后的日期
    for (int i = 0; i < n; i++)
        cout << p[i].year << "/" << p[i].month << "/" << p[i].day << endl;
    // 释放动态分配的数组内存
    //delete[] p; 
    return 0;
}
