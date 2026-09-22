// 给出一个整数a和正整数n，求乘方a的n次
// 输入：一行，包含两个整数a和n。-1000000<=a<=1000000,1<=n<=10000.
// 输出：一个整数，即乘方的结果。题目保证最终结果的绝对值不超过1000000。
 #include<cstdio>
 #include<iostream>
 using namespace std;
 int main()
 {
    int a,n,result;
   cin>>a>>n;
    result=a;
    for(int i=1;i<n;++i)
    result*=a;
    cout<<result;
    return 0;
 }
