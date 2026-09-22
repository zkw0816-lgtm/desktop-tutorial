// 遍历一个二维数组，将其所有元素逐行依次输出
#include<cstdio>
#include<iostream>
using namespace std;
#define ROW 20
#define COL 30
int main()
{
    int a[ROW][COL];
    for(int i=0;i<ROW;++i)
    {
    for(int j=0;j<COL;++j)
    cout<<a[ROW][COL]<<" "<<endl;
    }
    return 0;
}