#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

void transversal(struct  node *ptr)
{
    printf("ptr=%d\n",ptr);
    while (ptr!=NULL)
    {
        printf("Element:-%d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct node* insertion(struct node* head,int data)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}

void between_insertion(struct  node *p,int ind)
{
   for (int i = 1; i < ind; i++)
   {
       p=p->next;
   }
   
            struct node* ptr=(struct node*)malloc(sizeof(struct node));
            ptr->data=9999;
            ptr->next=p->next;
            p->next=ptr;
}

void at_end(struct  node *ptr)
{
    while ((ptr->next)!=NULL)
    {
        ptr=ptr->next;
    }
    struct node* p=(struct node*)malloc(sizeof(struct node));
    p->data=9999;
    p->next=ptr->next;
    ptr->next=p;
}

int main()
{
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;
    struct node* fifth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    fifth=(struct node*)malloc(sizeof(struct node));

    head->data=45;
    head->next=second;

    second->data=55;
    second->next=third;

    third->data=65;
    third->next=fourth;

    fourth->data=75;
    fourth->next=fifth;

    fifth->data=85;
    fifth->next=NULL;
    
    printf("head=%d\n",head);
    printf("BEFORE:-\n");
    transversal(head);
    head=insertion(head,0);
    printf("AFTER:-\n");
    transversal(head);
    // between_insertion(head,1);
    // at_end(head);
    // transversal(head);

}