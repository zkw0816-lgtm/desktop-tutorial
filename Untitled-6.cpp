//给定一个字符，用它构造一个底边长5个字符，高3个字符的等腰字符三角形
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    char c;
    cin >> c;//scanf("%c",&c);
    cout << "  " << c << endl;//printf("  %c\n",c);
    cout << " " << c << c << c << endl;//printf(" %c%c%c\n",c,c,c);
    cout<<c<<c<<c<<c<<c<<endl;//printf("%c%c%c%c%c\n",c,c,c,c,c);
    return 0;
}