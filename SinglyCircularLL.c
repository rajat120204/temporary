#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    int data;
    struct node*next;
}*head=NULL, *rear=NULL;

void insertFront(){
    struct node*new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL){
        printf("Overflow...!\n");
        return;
    }
    printf("Enter info: ");
    scanf("%d", &new->data);
    if(head==NULL){
        head=new;
        head->next=head;
        rear=head;
    }
    else{
        new->next=head;
        head=new;
        rear->next=head;
    }
}

void insertRear(){
    struct node*new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL){
        printf("Overflow...!\n");
        return;
    }
    printf("Enter info: ");
    scanf("%d", &new->data);
    if(head==NULL){
        head=new;
        head->next=head;
        rear=head;
    }
    else{
        new->next=head;
        rear->next=new;
        rear=new;
    }
}

void insertMid(int mid){
    struct node*tmp=head;
    struct node*new=(struct node*)malloc(sizeof(struct node));
    while((tmp!=rear)){
        if(tmp->data==mid){
            printf("Enter info: ");
            scanf("%d", &new->data);
            new->next=tmp->next;
            tmp->next=new;
            return;
        }
    }
}