#include<iostream>
using namespace std;
int main()
{
    int a[200];
    int *p;
    p=a;
    *p=10;
    *(p+1)=20;
    p[0]=30;
    p[4]=40;
    for(int i =0;i<10;++i)
        *(p+i)=i;  
    ++p;
    cout<<p[0]<<endl;
    p=a+6;
    cout<<*p<<endl;
    return 0;
}