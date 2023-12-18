#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Student {
    string id;
    string chinese;
    string math;
    string total;
};
   

   
bool compare (Student a, Student b){
        if (a.total !=b.total) {
            return a.total > b.total;  // 按总分从高到低排序
        } else if (a.math != b.math) {
            return a.math > b.math;  // 当总分相同时，按数学成绩从高到低排序
        } else {
            return a.id > b.id;  // 当语文和数学成绩都相同时，按学号从高到低排序
        }
}


int main() {
    int n;
    cin >> n;

    vector<Student> students;

    for (int i = 0; i < n; ++i) {
        string id, chinese, math,total;
        cin >> id >> chinese >> math>>total;

        
        students.push_back({id, chinese, math,total});
    }

    sort(students.begin(), students.end(),compare);

    for (Student student : students) {
        cout << student.id << " " << setw(3) << student.chinese << " " << setw(3) << student.math
             << " " << setw(3) << student.total << endl;
    }

    return 0;
}
