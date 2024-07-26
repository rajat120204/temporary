#include<stdio.h>
#include<stdlib.h>
struct stack{
    int a[100];
    int top;
};

void push(struct stack*st, int ele){
    if(st->top==100-1){
        printf("Stack Overflow...!");
    }
    else{
        st->top++;
        st->a[st->top]=ele;
    }
}

int pop(struct stack*st){
    if(st->top==-1){
        printf("Stack Undeflow...!");
        return -1;
    }
    else{
        int x=st->a[st->top];
        st->top--;
        return x;
    }
}

int peek(struct stack*st){
    if(st->top==-1){
        printf("Stack is empty...!");
        return 0;
    }
    else{
        int x = st->a[st->top];
        return x;
    }
}

void display(struct stack*st, int l){
    if(l==-1){
        printf("\n");
        return;
    }
    else{
        printf("%d ", st->a[l]);
        display(st, l-1);
    }
}

void add_to_bottom(struct stack*st, int x){
    if(st->top==-1){
        push(st,x);
    }
    else{
        int a=pop(st);
        add_to_bottom(st,x);
        push(st,a);
    }
}

void reverse(struct stack*st){
    if(st->top!=-1){
        int x=pop(st);
        reverse(st);
        add_to_bottom(st,x);
    }
    else{
        return;
    }
}

int main(){
    int c,x,flag=0,l;
    struct stack st;
    st.top=-1;
    while(1){
        printf("\nSelect the operation: \n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Top\n");
        printf("4.Display\n");
        printf("5.Reverse\n");
        printf("6.Break\n");
        int n;
        scanf("%d", &n);
        switch(n){
            case 1:
            printf("\nEnter the Element: ");
            scanf("%d", &x);
            push(&st, x);
            break;

            case 2:
            c=pop(&st);
            if(c!=-1){
                printf("Deleted element is %d.\n",c);
            }
            break;

            case 3:
            c=peek(&st);
            if(c!=-1){
                printf("Top element is %d.\n", c);
            }
            break;

            case 4:
            l=st.top;
            printf("Stack elements are: \n");
            display(&st, l);
            break;

            case 5:
            reverse(&st);
            l=st.top;
            display(&st,l);
            break;

            default:
            flag=1;
            break;
        }
        if(flag==1){
            break;
        }
    }
    return 0;
}