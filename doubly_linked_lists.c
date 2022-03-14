#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    struct node* prev;
    int data;
    struct node* next;
};

void transversal(struct node* head)
{
    // while (head!=NULL)
    // {
    //     printf("element:-%d\n",head->data);
    //     head=head->next;
    // }


    //The below code is to traverse upto last element
     while (head->next!=NULL)
    {
        printf("element:-%d\n",head->data);
        head=head->next;
    }
    printf("element:-%d\n",head->data);

    //The below code is to traverse back to first element
     while (head->prev!=NULL)
    {
        printf("element:-%d\n",head->data);
        head=head->prev;
    }
    printf("element:-%d\n",head->data);
    
}


int main()
{
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;
    
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));


    head->prev=NULL;
    head->data=45;
    head->next=second;

    second->prev=head;
    second->data=55;
    second->next=third;


    third->prev=second;
    third->data=65;
    third->next=fourth;

    fourth->prev=third;
    fourth->data=75;
    fourth->next=NULL;

    transversal(head);

    return 0;
}