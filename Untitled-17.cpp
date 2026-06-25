/*if语句
写一个判断整数奇偶性的程序，要求输入一个整数，
如果为奇数，就输出 "It's odd."，如果是偶数，就输出"It's even."
*/
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==1)
    printf("It's odd.");
    else
    printf("It's even.");
    return 0;
}