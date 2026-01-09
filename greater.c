#include<stdio.h>
int main(){

    int a, b;


    printf("enter 1st number");
    scanf("%d" ,&a);

    printf("enter 2nd number ");
    scanf("%d", &b);

    if(a>b)
        printf("%d is grater" ,a);
    else
    printf("%d is grater" ,b);
    
    return 0;
    

}