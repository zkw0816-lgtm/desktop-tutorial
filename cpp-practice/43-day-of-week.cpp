#include<cstdio>
#include<iostream>
using namespace std;
int mouthDays[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
    int year,mouth,date;
    int days=0;
    cin>>year>>mouth>>date;
    if(year%4==0&&year%100!=0||year%400==0)
    mouthDays[2]=29;
    for(int i=2012;i<year;++i)
    {
        if(i%4==0&&i%100!=0||i%400==0)
        days+=366;
        else
        days+=365;
    }
    for(int i=1;i<mouth;++i)
    days+=mouthDays[i];
    days+=date;
    days-=22;
    cout<<days%7<<endl;
    return 0;
}