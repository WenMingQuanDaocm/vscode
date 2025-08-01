// 动态内存分配
// 1.使用malloc函数分配内存
// (void* malloc(size_t)，返回值为地址
// void*表示通用数据类型的指针，size_t是sizeof类型的数据，
// 是无符号数,printf中用%zu)
// 成功申请会返回从堆内存上分配的内存指针
// 失败则返回空指针
// 2.使用内存
// 3.free掉内存 
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p;
    p = (int*)malloc(sizeof(int));
    *p = 15;
    printf("%d\n", *p);
    free(p);
    return 0;
} 