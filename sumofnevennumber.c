#include<stdio.h>
int main (){

    int i,n,sum=0;

    printf("Enter a no");
    scanf("%d" ,&n);
 if(n%2==0)
 {

     for(i=1; i<=n; i++){

        sum=sum+i*2;
    }
printf("%d" ,sum);
 }
 else
 {
    printf("\n number odd");
 }

return 0;


}