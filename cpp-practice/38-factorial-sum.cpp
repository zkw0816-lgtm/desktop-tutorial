/* 给定正整数n，求不大于n的正整数阶乘的和（即求1！+2！+3！+…+n！）
输入有一行，包含一个正整数n（1<n<12）
输出有一行，阶乘的和*/
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;++i)
    {
        int factorial=1;
        factorial*=i;
        sum+=factorial;
    }
    cout<<sum<<endl;
    return 0;
}