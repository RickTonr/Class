#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int score[5];
    double avg;
};

// 计算平均分数
double calculateAverage(int a[]) {
    double sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += a[i];
    }
    return sum / 5;
}

// 比较函数，用于排序
bool cmp(const Student &a, const Student &b) {
    if (a.avg == b.avg) {
        return a.name < b.name;  // 如果平均分数相同，按姓名的ASCII码从小到大排序
    }
    return a.avg > b.avg;  // 按平均分数从大到小排序
}

int main() {
    const int maxStudents = 100;
    Student stu[maxStudents];

    int n = 0;
    // 输入学生信息，以 "end" 结束输入
    while (cin >> stu[n].name && stu[n].name != "end") {
        for (int i = 0; i < 5; i++) {
            cin >> stu[n].score[i];
        }
        stu[n].avg = calculateAverage(stu[n].score);
        n++;
    }

    // 使用自定义的比较函数进行排序
    sort(stu, stu + n, cmp);
    int t=0;
    // 输出平均分数在60分及60分以上的学生信息
    for (int i = 0; i < n; i++) {
        if (stu[i].avg >= 60) {
            t++;
            cout <<t<<" "<< stu[i].name << endl;
        }
    }

    return 0;
}
