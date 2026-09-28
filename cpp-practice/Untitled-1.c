#include<stdio.h>
int main()
{
    int a = 100, b = 10;
    int *pointer_1, *pointer_2;
    pointer_1 = &a;
    pointer_2 = &b;

    printf("a=%d, b=%d\n", a, b);
    printf("*pointer_1=%d, *pointer_2=%d\n", *pointer_1, *pointer_2);

    // 新增：看看指针变量自己的地址和值
    printf("\n--- 指针本身 ---\n");
    printf("pointer_1 自己的地址: %p\n", &pointer_1);
    printf("pointer_1 里面存的值: %p\n", pointer_1);
    printf("pointer_2 自己的地址: %p\n", &pointer_2);
    printf("pointer_2 里面存的值: %p\n", pointer_2);

    return 0;
}
