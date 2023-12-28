#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>
using namespace std;

struct Student
{
    char name[12];
    double gpa; // (1) Add the missing data member for GPA
};

bool cmp(const Student* a1, const Student* a2)
{
    if (a1->gpa != a2->gpa)
        return a1->gpa > a2->gpa;
    return strcmp(a1->name, a2->name) < 0;
}

void sort(Student* p, int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        int k = i; // (2) Initialize variable k
        for (int j = i + 1; j < n; ++j)
            if (cmp(&p[j], &p[k]) == true)
                k = j;
        Student t = p[i];
        p[i] = p[k];
        p[k] = t;
    }
}

int main()
{
    int n;
    cin >> n;

    Student* st = new Student[n]; // (4) Allocate dynamic memory for the array of students

    for (int i = 0; i < n; ++i)
        cin >> st[i].name >> st[i].gpa;

    sort(st, n); // (5) Sort the array of students

    cout << setprecision(2) << fixed;
    for (int i = 0; i < n; ++i)
        cout << left << setw(11) << st[i].name << st[i].gpa << "\n";

    delete[] st; // Free the dynamically allocated memory
    return 0;
}
