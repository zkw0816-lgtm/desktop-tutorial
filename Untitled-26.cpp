/*输入若干个（至少一个）不超过100的正整数，输出其中的最大值，最小值以及所有数的和。
输入的最后一个数是0，标志着输入结束*/
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n,maxN=0,minN=101,sum=0;
    cin>>n;
    while(n)
    {
        if(n>maxN)
        maxN=n;
        if(n < minN)
            minN=n;
        sum+=n;
        cin>>n;
    }
    cout<<maxN<<"  "<<minN<<"  "<<sum<<endl;
    return 0;
}