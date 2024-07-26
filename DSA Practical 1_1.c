#include<stdio.h>

struct employee{
    char name[20];
    int id;
    long mobile;
};

int main(){
    int n,m;
    char a;
    printf("How many employees' details you want to add?");
    scanf("%d",&n);
    int temp = n;
    struct employee e[n];
    for(int i=0;i<n;i++){
        printf("Name of the employee");
        scanf("%s",e[i].name);
        printf("ID number of employee(only in digits)");
        scanf("%d",&e[i].id);
        printf("Mobile number of employee");
        scanf("%ld",&e[i].mobile);
    }
    for(int i=0;i<n;i++){
       printf("%d]. %s\n%d\n%ld\n",i+1,e[i].name,e[i].id,e[i].mobile);
    }


    t1:
    printf("Want to remove an employee's details?");
    
    scanf(" %c",&a);
    if(a=='Y' || a=='y'){
        printf("Enter the sr no. of the employee you enter ");
        scanf("%d",&m);
        for(int i=m-1;i<n-1;i++){
            e[i]=e[i+1];
        }
        goto t1;
    }
    t2:
    printf("Want to add an employee's details?");

    scanf(" %c",&a);
    if(a=='Y' || a=='y'){
        if(temp==n)
        {
            printf("You cannot add new emp detail\n");
        }else
        {
            printf("Name of the employee");
            scanf("%s",e[n].name);
            printf("ID number of employee(only in digits)");
            scanf("%d",&e[n].id);
            printf("Mobile number of employee");
            scanf("%ld",&e[n].mobile);
        }
        goto t2;
    }
    for(int i=0;i<n;i++){
       printf("%d]. %s\n%d\n%ld\n",i+1,e[i].name,e[i].id,e[i].mobile);
    }
    return 0;
}



