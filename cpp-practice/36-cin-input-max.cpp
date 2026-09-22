// 输入若干个整数，输出最大值
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n,max=0;
   if(cin>>n)
   {
    max=n;
    while(cin>>n)
{
    if(n>max)
    max=n;
}
}
    cout<<max<<endl;
    return 0;
}
    