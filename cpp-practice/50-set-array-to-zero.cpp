// 编写一个把int数组所有元素置0的函数
#include<iostream>
#include<cstdio>
using namespace std;
int a1[4]={4,15,6,9};
void SetToZero(int a[],int length)
{
    for(int i=0;i<length;++i)
    a[i]=0;
}
int main()
{
    SetToZero(a1,4);
    for(int i=0;i<3;++i)
    cout<<a1[i]<<",";
    cout<<a1[3];
    return 0;
}


