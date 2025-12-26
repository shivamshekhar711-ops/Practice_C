#include<stdio.h>
int main(){

    int n,r,arm=0,o;

    printf("enter a number :");
    scanf("%d",&n);

    o=n;

    while(n>0){

        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;

    }

    if(o==arm)
    printf("Armstrong number ");
    else
    printf("not armstrong number ");
  
    return 0;
}