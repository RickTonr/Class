#include<iostream>
#include<cstring>
using namespace std;

void sort(char* name[], int n);
void print(char* name[], int n);

int main()
{
    char* name[] = {"BASIC", "FORTRAN", "C++", "Pascal", "COBOL"};
    int n;
    cin >> n;
    sort(name, n);
    print(name, n);
    return 0;
}

void sort(char* name[], int n)
{
    char* temp;
    int i, j, k;
    for (i = 0; i < n - 1; i++)
    {
        k = i;
        for (j = i + 1; j < n; j++)
            if (strcmp(name[j], name[k]) < 0) // (2) 使用strcmp函数比较字符串大小
                k = j;
        if (k != i) // (3) 如果k不等于i，交换name[k]和name[i]
        {
            temp = name[k];
            name[k] = name[i];
            name[i] = temp;
        }
    }
}

void print(char* name[], int n)
{
    for (int i = 0; i < n; i++)
        cout << name[i] << endl;
}
