// 求平方根
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a;
    cin>>a;
    if(a<0)
    {
        cout<<"Illegal input"<<endl;
        return 0;
    }
    cout<<sqrt(a);
    return 0;
}
