#include<stdio.h>
int main(){
    int a, b;

    printf("enter a numbner ");
    scanf("%d" , &a);

    printf("enter b number ");
    scanf("%d" ,&b);

    if(a<b)
    printf("%d is smalllest number" , a);

    else
    printf("%d is smallest number " ,b);

    return 0;
}