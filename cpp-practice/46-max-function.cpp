// Max函数
#include<cstdio>
#include<iostream>
using namespace std;
int Max (int x,int y)
{
    if(x>y)
        return x;
    return y;
}
int main()
{
    int n=Max(4,6);
    cout<<n<<","<<Max(20,n)<<endl;
    return 0;
}
