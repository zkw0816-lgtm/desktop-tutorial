/* 输入第一行是整数m,n，表示第一个矩阵是m行n列。接下来是一个m×n的矩阵。
下一行输入是整数p，q，表示下一个矩阵是p行q列（n=p），接下来就是一个p行q列的矩阵。
要求输出两个矩阵相乘的结果矩阵。(1<m,n,p,q<=8)
*/
#include<cstdio>
#include<iostream>
using namespace std;
#define ROWS 8
#define COLS 8
int a[ROWS][COLS];
int b[ROWS][COLS];
int c[ROWS][COLS];
int main()
{
    int m,n,p,q;
    cin>>m>>n;
    for(int i=0;i<m;++i)
        for(int j=0;j<n;++j)
            cin>>a[i][j];
    cin>>p>>q;
    for(int i=0;i<p;++i)
        for(int j=0;j<q;++j)
            cin>>b[i][j];
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<q;++q)
        {
            c[i][j]=0;
            for(int k=0;k<n;++k)
                c[i][j]+=a[i][k]*b[k][j];
        }
    }
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<q;++j)
        {
            cout<<c[ROWS][COLS]<<" "<<endl;
        }
    }
    return 0;
}
