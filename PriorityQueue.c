#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Queue{
    int q[100][2];
    int front;
    int rear;
}prique;

void push(struct Queue*st, int x, int p){
    if(st->rear==99){
        printf("Array is overflow\n");
        return 0;
    }
    if(st->front==-1){
        st.front=0;
    }
    st->rear++;
    st->q[st->rear][0]==x;
    st->q[st->rear][1]==p;
}

void pop(struct Queue*st){
    if(st->front==-1){
        printf("Array is undeflow\n");
        return 0;
    }
    int max=st->q[st->front][1];
    int temp=st->front;
}

int main(){
    prique.front=-1;
    prique.rear=-1;
    int x, i, p ,opt;
    char c='Y';
    while(c=='Y'){
        printf("Enter the operation you want to perform on 2D Array:\n\t1.Push\t2.Pop\t3.Display\n");
        scanf("%d", &opt);
        if(opt==1){
            printf("Enter the element: ");
            scanf("%d", &x);
            printf("Enter the priority: ");
            scanf("%d", &p);
            push(&prique, x, p);
        }
        else if(opt==2){
            pop(&prique);
        }
        else if(opt==3){
            priority(&prique);
            display(&prique);
        }
        else{
            printf("Enter valid choice: \n");
        }

        printf("Continue? (Y/N): ");
        fflush(stdin);
        scanf(" %c", &c);
    }
    return 0;
}

