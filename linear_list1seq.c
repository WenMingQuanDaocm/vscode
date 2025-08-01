//线性表(linear list)主要有两种形式,
//顺序表和链表
//顺序表
#include<stdio.h>
#include<string.h>
#define MAX 100
typedef int ElemType;//用ElemType便于后续修改类型

typedef struct 
{
    ElemType data[MAX];
    int length;
}Seqlist;//顺序表

void initList(Seqlist *L)//顺序表初始化
{
    L->length = 0;

}

int appendElem(Seqlist *L,ElemType e)//在顺序表尾部添加元素
{
    if(L->length>=MAX)
    {
        printf("full list");
        return 0;
    }

    L->data[L->length] = e;
    L->length++;
    return 1;
}

void listElem(Seqlist *L)//遍历输出顺序表
{
    for(int i=0;i < L->length;i++)
    {
        printf("%d ",L->data[i]);
    }
    printf("\n");
}

int insertElem(Seqlist *L, int pos, ElemType e)//顺序表中插入数据
{
    if(L->length>=MAX)
    {
        printf("full list\n");
        return 0;
    }

    if(pos < 1||pos > L->length)
    {
        printf("wrong position\n");
        return 0;
    }

    else//指定位置，该位置往后所有元素往后移动一位，再插入
    {
        for(int i = L->length - 1;i >= pos - 1;i--)
        {
            L->data[i+1] = L->data[i];
        }
        L->data[pos-1] = e;
        L->length++;

    }
    return 1;
}

int deleteElem(Seqlist *L, int pos, ElemType *e)//顺序表删除数据
{
     if(pos < 1||pos > L->length)
    {
        printf("wrong position\n");
        return 0;
    }

    *e = L->data[pos-1];
    //有的时候我们并不知道具体删除数据是多少，
    //所以用一个指针存储删除的数据，并可以将之输出
    for(int i = pos; i < L->length;i++)
    {
        L->data[i-1] = L->data[i];
    }
    L->length--;//删除最后一个元素时直接将length -1,逻辑删除
    return 1;
}

int findElem(Seqlist *L, ElemType e)//查找元素
{
    if(L->length == 0)
    {
        printf("empty list\n");
        return 0;
    }

    for(int i = 0;i < L->length;i++)
    {
        if(L->data[i] == e)
        {
            return i + 1;
        }
        
    }
    return 0;
}

// typedef struct 
// {
//     ElemType *data;
//     int length;
// }Seqlist;//动态分配内存顺序表定义

// Seqlist* ainitList()//动态分配内存地址初始化
// {
//     Seqlist *L = (Seqlist*)malloc(sizeof(Seqlist));
//     L->data = (ElemType*)malloc(sizeof(ElemType) * MAX);
//     L->length = 0;
//     return L;

// }

int main()
{
    Seqlist list;//声明一个顺序表
    initList(&list);//初始化
    printf("length=%d\n",list.length);
    printf("memory=%zu\n",sizeof(list.data));
    appendElem(&list,88);
    appendElem(&list,12);
    appendElem(&list,13);
    appendElem(&list,14);
    appendElem(&list,2);
    appendElem(&list,84);
    listElem(&list);
    insertElem(&list,2,18);
    listElem(&list);
    ElemType delData;
    deleteElem(&list,2,&delData);
    printf("%d is deleted\n",delData);
    listElem(&list);
    printf("%d \n",findElem(&list, 2));
    return 0;
    
}