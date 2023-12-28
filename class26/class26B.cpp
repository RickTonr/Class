// 编写函数，求m行、n列的二维数组全体元素中负数的个数，函数定义如下
// int  num2array(int **a, int h, int w)
// 函数返回值为其中负数的个数，第一个参数表示二维数组，第二个参数表示二维数组的行数，第三个参数表示二维数组的列数
#include <stdio.h>
int  num2array(int **a, int h, int w)
{
	int ans=0;
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)
		{
			if(a[i][j]<0) ans++;
		}
	}
	return ans;
}
int main()
{  
	int h,w;
	scanf("%d%d",&h,&w);
	int** a=new int* [h];
	for(int i=0;i<h;i++)
		a[i]=new int [w];
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)
		scanf("%d",a[i]+j);
	}
	printf("%d",num2array(a,h,w));
	for(int i=0;i<h;i++)
		delete [] a[i];
	delete [] a;
	a=NULL;    
}