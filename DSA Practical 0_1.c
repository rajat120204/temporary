#include<stdio.h>
void sum(){
    int a,b;
    printf("Enter the first value: ");
    scanf("%d", &a);
    printf("Enter the second value: ");
    scanf("%d", &b);
    printf("Their sum is: %d", a+b);
    //printf("%d", a+b);
}
int main(){
    sum();
}