#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct queue{
    int f;
    int r;
    // int size;
    int arr[5];
}*qe;

void enqueue(int x){
    if((qe->r==4 && qe->f==0) || (qe->r+1==qe->f)){
        printf("Queue is overflow...!");
        return;
    }
    else if(qe->f==-1 && qe->r==-1){
        qe->f=0;
        qe->r=0;
    }
    else{
        qe->r=(qe->r+1)%5;
    }
    qe->arr[qe->r]=x;
}

void dequeue(){
    if(qe->f==-1 && qe->r==-1){
        printf("Queue is underflow....!");
    }
    else if(qe->f==qe->r){
        printf("The deleted element is %d.\n", qe->arr[qe->f]);
        qe->f=-1;
        qe->r=-1;
    }
    else{
        if(qe->f==4){
            qe->f=0;
        }
        else{
            printf("Dequeued element is %d.", qe->arr[qe->f]);
            qe->f=qe->f+1;
        }
    }
}

void display(){
    int i=qe->f;
    if(qe->f==-1 && qe->r==-1){
        printf("Queue is empty..!");
    }
    else{
        if(qe->f>qe->r)
        {
            while (i<5)
            {
                printf("%d ",qe->arr[i]);
                i++;
            }
            for (int k = 0; k <= qe->r; k++)
            {
                printf("%d ",qe->arr[k]);
            }

        }else
        {
            for (int k = qe->f; k <= qe->r; k++)
            {
                printf("%d ",qe->arr[k]);
            }
        }
    }
}

int main(){
    // struct queue qe;
    qe = (struct queue*)malloc(sizeof(struct queue));
    qe->f=-1;
    qe->r=-1;
    // qe.size=5;
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
            enqueue(x);
            break;

            case 2:
            dequeue();
            break;

            case 3:
            display();
            break;

            default: 
            return 0;
        }
    }
    return 0;
}

