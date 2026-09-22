// 连续输出26个英文字母，从A隔一个输出一个，体现循环控制变量只在for语句内部起作用
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int i=5;
    for(int i=0;i<26;++i)
    {
        cout<<char('a'+i);
        cout<<endl;
    }
    for(int i=0;i<26;i+=2)
    {
        cout<<char('A'+i);
        cout<<endl;
    }
    cout<<i;
    return 0;
}