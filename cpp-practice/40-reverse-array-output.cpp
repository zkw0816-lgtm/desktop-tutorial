// 接收键盘输入的100个整数，然后将他们按和原顺序相反的顺序输出
#include<cstdio>
#include<iostream>
using namespace std;
#define NUM 100
int a[NUM];
int main()
{
    for(int i=0;i<NUM;++i)
    cin>>a[i];
    for(int i=NUM-1;i>=0;i--)
    cout<<a[i]<<" ";
    return 0;
}