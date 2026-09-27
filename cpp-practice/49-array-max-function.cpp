// 求整型数组的最大值的函数
#include<iostream>
#include<cstdio>
using namespace std;
int a1[4]={4,15,6,9};
int a2[]={3,18,56,40,78};
int FindMax(int a[],int length)
{
    int mx=a[0];
    for(int i=1;i<length;++i)
        if(mx<a[i])
            mx=a[i];
    return mx;
}
int main()
{
    cout<<FindMax(a1,sizeof(a1)/sizeof(int))<<endl;
    cout<<FindMax(a2,sizeof(a2)/sizeof(int))<<endl;
    return 0;
}
