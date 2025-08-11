//链表
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

//头插法，新节点接在头节点后面
void insertHead(Node *L, ElemType e)
{
    Node *p = (Node*)malloc(sizeof(Node));
    p->data = e;
    p -> next = L -> next;
    L ->next = p;
    return 1;

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


int main()
{
    Node *list = initList();
    insertHead(list,10);
    insertHead(list,20);
    insertHead(list,30);
    insertHead(list,40);
    listNode(list);
    return 1;

}  