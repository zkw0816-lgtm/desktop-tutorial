#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;

    cout << "改之前 a = " << a << endl;

    *p = 999;                           // 新增：通过纸条 p 去改数据

    cout << "改之后 a = " << a << endl;  // 新增：看看 a 变了没

    a = 888;                            // 新增：直接改 a

    cout << "再改之后 *p = " << *p << endl;  // 新增：看看 *p 变了没

    return 0;
}