/*给定正整数n和m，在1至n这n个数中，取出两个不同的数，
使得其和是m的因子，问有多少种不同的取法*/
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    int total=0;
    cin>>n>>m;
    for(int i=1;i<n;++i)
    {
        for(int j=i+1;j<=n;++j)
        if(m%(i+j)==0)
        ++total;
    }
    cout<<total;
}