//指定位置插入节点

#include<stdio.h>

typedef int ElemType;

typedef struct node
{
    ElemType data;
    struct node *next;
}Node; 

Node* initList()
{
    Node *head = (Node*)malloc(sizeof(Node));
    head->data = 0;
    head->next = NULL;
    return head;
}

void listNode(Node *L)//遍历链表
{
    Node *p = L->next;
    while(p != NULL)
    {
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");

}

Node* get_tail(Node *L)//获取尾节点，尾插法的前置工作
{
    Node *p = L;
    while(p->next != NULL)
    {
        p = p->next;
    }
    return p;
}

//尾插法
Node* insertTail(Node *tail, ElemType e)
{
    Node *p = (Node*)malloc(sizeof(Node));
    p->data = e;
    tail ->next = p;
    p->next = NULL;
    return p;
}

void insertNode(Node *L, int pos, ElemType e)
{
    //用来保存插入位置的前驱节点
    Node *p = L;
    int i = 0;
    //找到指定位置的前驱节点
    while(i<pos-1)
    {
        p = p->next;
        i++;
        if(p == NULL)
        {
            return 0;
        }
    }
    //要插入的新节点
    Node *q = (Node*)malloc(sizeof(Node));
    q->data = e;
    q ->next = p->next;
    p->next = q;
    return 1;
    
}

int main()
{
    Node *list = initList();
    Node *tail = get_tail(list);
    tail = insertTail(tail,10);
    tail = insertTail(tail,20);
    tail = insertTail(tail,30);
    tail = insertTail(tail,40);
    listNode(list);
    insertNode(list,2,15);
    listNode(list);
    return 0;

}  