#include<stdio.h>
int main(){
    char s1[1000], s2[1000];
    printf("Enter string 1: ");
    fflush(stdin);
    gets(s1);
    printf("Enter string 2: ");
    fflush(stdin);
    gets(s2);
    printf("Length of string 1 is: %d", strlen(s1));
    printf("\nLength of string 2 is: %d", strlen(s2));
    strcat(s1,s2);
    printf("\nConcatenated string is: %s", s1);
}