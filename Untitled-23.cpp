// for循环“表达式2”中不能用若干个逗号连接
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
for(int i=15,j=0;i>j;i-=2,j+=3)
cout<<i<<","<<j<<endl;
return 0;
}
