/*给定一个长度为n的非负整序列，请计算序列的最大跨度值（最大跨度值等于最大值减最小值）
输入一共两行，第一行为序列的个数n（1<=n<=1000）
第二行为序列的n个不超过1000的非负整数
整数之间以一个空格分隔*/
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n,minV,maxV;
    cin>>n>>minV;
    maxV=minV;
    for(int i=0;i<n-1;i++)
    {
    int a;
    cin>>a;
    if(a<minV)
    minV=a;
    if(a>maxV)
    maxV=a;
    }
    cout<<maxV-minV<<endl;
return 0;
}