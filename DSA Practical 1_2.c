#include<stdio.h>
#include<time.h>
int main(){
    srand(time(0));
    
    int n,num;
scanf("%d",&n);

num=rand()%n+0;
printf("%d",num);
    // fflush(stdin);
    // gets(s1);
    // fflush(stdin);
    // gets(s2);
    // char t1, t2;
    // for(int i=0; i<100; i++){
    //     for(int j=0; j<100; j++){
    //         if(s1[i]>s1[j]){
    //             t1=s1[i];
    //             s1[i]=s1[j];
    //             s1[j]=t1;
    //         }
    //     }
    // }
    // for(int i=0; i<100; i++){
    //     for(int j=0; j<100; j++){
    //         if(s2[i]>s2[j]){
    //            t2=s2[i];
    //            s2[i]=s2[j];
    //            s2[j]=t2;
    //         }
    //     }
    // }
    // int check=1;
    // for(int i=0; i<100; i++){
    //     if(s1[i]!=s2[i]){
    //         check=0;
    //         break;
    //     }
    // }
    // if(check==1){
    //     printf("Yes, The given strings are anagram!!\n");
    // }
    // else{
    //     printf("No, The given strings are not an anagram!!\n");
    // }
}