/* 该程序输入一个年份，根据该年份输入一个年份，根据该年份判断是否是建国整十周年、建党整十周年
以及是否是闰年，给出不同的输出*/
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
   int year;
   scanf("%d",&year);
   if(year>0)
   {
    if(year>=1949&&(year-1949)%10==0)
    printf("Lucky year.");
    else if(year>=1921&&!((year-1921)%10))
    printf("Good year.");
    else if(year%4==0&&year%100||year%400==0)
    printf("Leap year.");
   }
   else
   printf("Illegal year.");
   return 0;
}
