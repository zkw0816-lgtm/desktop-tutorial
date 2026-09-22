/*接受一个整数作为输入，如果输入1，则输出"Monday"，输入2，则输出"Tuesday"……输入7，则输出"Sunday"，
输入其他数，则输出"Illegal"。*/
#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
string weekdays[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
int main()
{
    int n,i;
    cin>>n;
    if(i<1||i>7)
    cout<<"Illegal"<<endl;
    else
    cout<<weekdays[n-1]<<endl;
    return 0;
}