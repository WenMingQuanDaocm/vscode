#include<stdio.h>
struct point 
{
    int x;
    int y;
};

struct point createPoint(int x,int y)
{
    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}

int main()
{
    // struct point p;
    // p.x = 5;
    // p.y = 10;
    // printf("%d\n",p.x);
    // printf("%d\n",p.y);
    // return 0;
    struct point p;
    //p = createPoint(5,10);
    struct point *pp;
    pp = &p;
    (*pp).x = 5;//相当于pp->x = 5
    (*pp).y = 10;
    printf("%d\n",p.x);
    printf("%d\n",p.y);
}

//typedef struct

// typedef struct 结构名
// {
//     ……
// }别名;
// 或者
// typedef struct
// {
//     ……
// }别名; 


