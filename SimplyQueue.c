#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct queue{
    int f;
    int r;
    int size;
    int arr[100];
};

void enqueue(struct queue*qe, int x){
    if(qe->r==99){
        printf("Queue is overflow...!");
    }
    else if(qe->f==-1 && qe->r==-1){
        qe->f=0;
        qe->r=0;
    }
    else{
        qe->r=qe->r+1;
    }
    qe->arr[qe->r]=x;
}

void dequeue(struct queue*qe){
    if(qe->f==-1 && qe->r==-1){
        printf("Queue is underflow....!");
    }
    else if(qe->f==qe->r){
        printf("The deleted element is %d.\n", qe->arr[qe->f]);
        qe->f=-1;
        qe->r=-1;
    }
    else{
        printf("The dequeued element is %d.\n", qe->arr[qe->f]);
        qe->f=qe->f+1;
    }
}

void display(struct queue*qe){
    int i=qe->f;
    if(qe->f==-1 && qe->r==-1){
        printf("Queue is empty..!");
    }
    else{
        while(i<=qe->r){
            printf("%d\n",qe->arr[i%qe->size]);
            i=i+1;
        }
    }
}

int main(){
    struct queue qe;
    qe.f=-1;
    qe.r=-1;
    qe.size=5;
    int x;
    while(1){
        printf("\nSelect the operation: ");
        printf("\n1.Enqueue: ");
        printf("\n2.Dequeue: ");
        printf("\n3.Display: ");
        int n;
        scanf(" %d", &n);
        switch(n){
            case 1:
            printf("\nEnter the element: ");
            scanf(" %d", &x);
            enqueue(&qe, x);
            break;

            case 2:
            dequeue(&qe);
            break;

            case 3:
            display(&qe);
            break;

            default: 
            return 0;
        }
    }
    return 0;
}

