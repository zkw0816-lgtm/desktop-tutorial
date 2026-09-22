// 输入若干个正整数，输出其中的最大值
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    // freopen("c:\\tmp\\test.txt:,"r",stdin);
    int n,max=0;
    while(scanf("%d",&n)!=EOF)
    {
    if(n>max)
    max=n;
    }
    printf("%d",max);
    return 0;
}
