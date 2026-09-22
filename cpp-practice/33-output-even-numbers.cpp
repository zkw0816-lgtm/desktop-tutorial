// 1到10，输出偶数
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<=10;++i)
    {
    if(i%2)
    continue;
    cout<<i<<",";
    }
return 0;
}