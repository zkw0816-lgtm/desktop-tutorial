/*如果两个不同的正整数，他们的和是他们积的因子，就称这两个数为兄弟数
小的称为第数，大的称为兄数。
先后输入正整数n和m（n<m），请在n至m（共m-n+1个数）中，找出一对兄弟数。
如果找不到，就输出"No Solution."
如果能找到，就找出和最小的那一对；
如果有多对兄弟数和相同且都是最小的，就找出弟数最小的那一对。*/
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    // 输入与初始化
    int n,m,i,j;
    cin>>n>>m;
    int a=m+1,b=m+1;
    for(int i=n;i<m;i++)
    {
        if(2*i+1>a+b) break;
        for(int j=i+1;j<=m;j++)
        {
            if(i+j>a+b) break;
            if(i*j%(i+j)==0)
            {
                if(i+j<a+b)
                    {a=i;b=j;}
                else if(i+j==a+b&&i<a)
                    {a=i;b=j;}
            }
        }
    }
    // 结果输出
    if(a==m+1)
    cout<<"No Solution.";
    else
    cout<<a<<" "<<b;
    return 0;
}