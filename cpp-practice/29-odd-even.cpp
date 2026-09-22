/*给定一个整数，判断该数是奇数还是偶数，输入仅一行，一个大于正整数n，
输出仅一行，如果n是奇数，输出odd；如果n是偶数，输出even*/
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    cout<<"even";
    else
    cout<<"odd"<<endl;
    return 0;
}