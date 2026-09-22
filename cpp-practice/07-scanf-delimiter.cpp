//用scanf读入不同类型的变量，跳过输入的字符
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    char c;
    float m;
    scanf("%d,%c:%f",&n,&c,&m);
    printf("%d %c %f",n,c,m);
    return 0;
}