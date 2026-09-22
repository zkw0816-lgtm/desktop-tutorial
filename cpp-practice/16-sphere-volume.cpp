/*
半径为r的球，体积计算公式为V=4/3*Πr³，取Π=3.14，给定r，求V
输入不超过100的非负实数，即球半径，类型为double
输出一个实数，即球的体积，保留到小数点后两位
*/

#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    double PI=3.14,V,r;
    printf("r=");
    scanf("%lf",&r);
    V=4/3.0*PI*r*r*r;
    printf("V=%.2lf",V);
    return 0;
}