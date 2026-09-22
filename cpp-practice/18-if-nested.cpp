// if语句嵌套
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
    {
        if(a%2)//if(a%2 !=0)
        cout<<"good";
    }
    else
    cout<<"bad";
    return 0;
}