// 输入正整数n（n>=2)，求不大于n的全部质数
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<2<<endl;
    for(int i=3;i<=n;i+=2)
    {
        int k;
    for(k=3;k<i;k+=2)
    {
        if(i%k==0)
        break;
        if(k*k>i)
        break;
    }
    if(k*k>i)
    cout<<i<<endl;
}
return 0;
}