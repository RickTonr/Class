#include <stdio.h>

float find(float *p, int n, int flag);

int main() {
    int n;
    float s, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
        scanf("%f", a + i);
    
    s = find(a, n, 1);
    printf("%f\n", s);

    s = find(a, n, -1);
    printf("%f\n", s);

    return 0;
}

float find(float *p, int n, int flag) {
    int i; 
    float t, fh;
    if (flag >= 0) 
        fh = 1; 
    else 
        fh = -1;
    
    t = *p;
    for (i = 1; i < n; i++) 
        if (*(p + i) * fh > t * fh) 
            t = *(p + i);
    
    return t;
}
