/* switch语句进入某个case分之后，会一直执行到第一个碰到的“break；”，即使它在后面的case分支里面。
如果没有碰到它，则会向下一直执行到switch语句末尾的“}”，包括“default：”部分的语句组。*/
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    switch(n%6)
    {
        case 0:
        printf("case 0\n");
        break;
        case 1:
        printf("case 1\n");
        case 2:
        case 3:
        printf("case 2 or case 3\n");
        break;
        case 4:
        printf("case 4\n");
        break;
    }
    return 0;
}