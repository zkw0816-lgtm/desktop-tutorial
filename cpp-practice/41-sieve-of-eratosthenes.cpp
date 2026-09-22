/* 筛法求素数：把2到n的所有数都列出来，先划掉n内所有2的倍数，
然后每次从下一个数（必然是素数）开始，划掉其n内的所有倍数。
最后剩下的数，就是素数。*/
#include<cstdio>
#include<iostream>
using namespace std;
#define MAX_NUM 10000000
char isPrime[MAX_NUM+10];
int main()
{
    for(int i=2;i<=MAX_NUM;i++)
    isPrime[i]=1;
    for(int i=2;i<=MAX_NUM;i++)
    {
        if(isPrime[i])
        for(int j=2*i;j<=MAX_NUM;j+=i)
        isPrime[j]=0;
    }
    for(int i=2;i<=MAX_NUM;++i)
    if(isPrime[i])
    cout<<i<<endl;
    return 0;
}
