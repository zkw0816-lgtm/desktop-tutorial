// Max函数，判断4和6谁大，20和（4，6）谁大
#include<cstdio>
#include<iostream>
using namespace std;
int Max (int x,int y)//返回值类型 函数名（参数1类型 参数1名称，参数2类型 参数2名称，……）
{                    //{
    if(x>y)          //语句组
        return x;    //}
    return y;
}                   
int main()
{
    int n=Max(4,6);
    cout<<n<<","<<Max(20,n)<<endl;
    return 0;
}
