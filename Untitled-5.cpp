//类型自动转换
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n1=1378;
    short n2;
    char c='a';
    double d1=7.809;
    double d2;
    {
    n2=c+1;
    printf("c=%c,n2=%d\n",c,n2);
    }
    {
    c=n1;
    printf("c=%c,n1=%d\n",c,n1);
    }
    {
        n1=d1;
        printf("n1=%d\n",n1);
    }
    {
        d2=n1;
        printf("d2=%lf\n",d2);
    }
    return 0;
}