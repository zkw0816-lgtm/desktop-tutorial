/*已知三角形三个顶点的位置，求边长
给定平面上不共线的三个点，其坐标都是整数，编写程序，
求他们构成三角形三条边的长度
输入6个整数：x1，y1，x2，y2，x3，y3
代表三个点的坐标
以任意顺序输出三条边的长度均可
*/
#include<cstdio>
#include<iostream>
using namespace std;
#define EMS 0.001
double Sprt (double a)
{
    double x=a/2;
    double lastX=x+1+EMS;
    while(x-lastX>EMS||lastX-x>EMS)
    {
        lastX=x;
        x=(x+a/x)/2;
    }
    return x;
}
double Distance (double x1,double y1,double x2,double y2)
{
    return Sprt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int main()
{
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    cout<<Distance(x1,y1,x2,y2)<<endl;
    cout<<Distance(x2,y2,x3,y3)<<endl;
    cout<<Distance(x1,y1,x3,y3)<<endl;
    return 0;
}

    