// 输入一个正整数N，从小到大，在从大到小输出他的所有因子
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        cout<<i<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        if(n%i==0)
        cout<<i<<endl;
    }
    return 0;
}
