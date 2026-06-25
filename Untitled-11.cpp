//加减乘运算的溢出
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    unsigned int n1=0xffffffff;
    cout<<n1<<endl;
    unsigned int n2=n1+3;
    cout<<n2<<endl;
    return 0;
}