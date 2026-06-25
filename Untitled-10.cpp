//用cin读入所有输入的字符，包括空格，回车
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int c;                   //char c;
    while((c=cin.get())!=EOF)//while(scanf("%c",&c)!=EOF)
    {                        //{
        cout<<(char)c;       //printf("%c",c);
    }                        //}
    return 0;
}
/*          ② 把读到的字符赋给 c
           ↘
while ((c = cin.get()) != EOF)
        ↗            ↗
       ① 读取一个字符   ③ 判断 c 是不是 EOF
      （包括空格、回车！）
                                  ↓ 不是 EOF 就进循环体
{
    cout << (char)c;    ④ 把 c 强转成 char，原样输出
}
                                  ↓ 回到 ① 继续读下一个字符*/