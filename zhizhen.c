#include<stdio.h>

int main(){
    int a =10;
    int b =20;
    int *p = &a;
    int *q;
    q = &b;
    printf("test");
    printf("&a:%p\n &b:%p\n p:%p\n q:%p\n",&a,&b,p,q);
    return 0;
}