// 逻辑运算符和逻辑表达式
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
int a=0,b=1;
bool n=(a++)&&(b++);
cout<<a<<","<<b<<endl;
n=a++&&b++;
cout<<a<<","<<b<<endl;
n=a++||b++;
cout<<a<<","<<b<<endl;
return 0;
}