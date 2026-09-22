// 斐波那契数列指：数列的第一个数和第二个数都为1，接下来每个数都等于前两个数之和。
// 给出一个正整数k，要求斐波那契数列第k个数是多少。
// 输入：输入一行，包含一个正整数k。（1<=k<=46）
// 输出：输出一行，包含一个正整数表示斐波那契数列第k个数的大小
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int a1=1,a2=1,k,sum;

    cin>>k;
    if(k==1||k==2)
    cout<<1<<endl;
    else
    {
        for(int i=3;i<=k;++i)
        {
        sum=a1+a2;
        a1=a2;
        a2=sum;
        }
        cout<<a2<<endl;
    }
    return 0;
}