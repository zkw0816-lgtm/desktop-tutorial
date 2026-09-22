/*
例题: 用牛顿迭代法求输入的数的平方根。

欲求a的平方根，首先猜测一个值x1=a/2（也可以是随便什么其他值）作为其平
方根，然后根据下面的迭代公式算出x2，再将x2代入公式右边算出x3……直到连续两
次算出的xn和xn+1的差的绝对值小于某个值ε，即认为找到了足够精确的平方根。这
个ε值取得越小，计算出来的平方根就越精确。

迭代公式: x(n+1) = (x(n) + a / x(n)) / 2
*/
#include<iostream>
#include<cstdio>
using namespace std;
double EPS=0.00001;
int main()
{
    double a;
    cin>>a;
if(a>0)
{
double x=a/2,lastx=x+(1+EPS);
while((x-lastx)>EPS||(lastx-x)>EPS)
{
    lastx=x;
    x=((x+a/x))/2;
}
cout<<x;
}
else
cout<<"It can't be nagitive.";
return 0;
}