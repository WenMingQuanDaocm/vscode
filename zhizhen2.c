/*
间接引用操作符*返回指针变量的指向地址的值
通常把这个操作叫做“解引用指针”（dereferencing a pointer）
*/
    // int a = 5;
    // int *p = &a;
    // printf("%d\n", *p);
    // *p = 100;
    // printf("%d\n", a);
    // return 0;
    //输出为：
    //5
    //100
//交换（swap）函数
// void swap(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main()
// {
//    int m = 5, n = 10;
//    printf("m:%d\n n:%d\n", m, n);
//    swap(&m, &n);
//    printf("m:%d\n n:%d", m, n);
//    return 0;
// 输出为：
// m:5
//  n:10
// m:10
//  n:5
#include<stdio.h>
int main()
{
    int a[] = {1,2,3,4,5};
    int *p;
    p = a;
    for(int i = 0;i < sizeof(a)/sizeof(a[0]);i++)
    {
        printf("%d\n", a[i]);
    }
    for(int i = 0;i <sizeof(a)/sizeof(a[0]);i++)
    {
        printf("%d\n", *(p + i));
    }//给指针加上一个整数，实际上加的是这个整数
    //和指针数据类型对应的字节数的乘积
    //即当此处i等于1时，p = p + 1 -> p = p +1 * 4
    return 0; 
}
