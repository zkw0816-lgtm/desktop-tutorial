/*接受一个整数作为输入，如果输入1，则输出“Monday”，输入2，则输出“Tuesday”……输入7，则输出“Sunday”，
输入其他数，则输出“Illegal”。*/
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("Illegal");
        break;
    }
    return 0;
}

