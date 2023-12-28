//反转字符串
//create: 2015-11-26 20:58:01
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char c[255],ch;
    scanf("%s",c);
    int len=strlen(c);
    char *c_p = c;
    char *c_p_end=c+len-1;
    while(c_p < c_p_end){
        ch=*c_p;
        *c_p=*c_p_end;
        *c_p_end=ch;
        c_p++; 
		c_p_end--;
    }
    printf("%s\n",c);     
    return 0;
}