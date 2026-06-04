#include<stdio.h>
int main(){
    int n,i,product=1;
    printf("enter a no");
    scanf("%d",&n);
    for(i=n;i>0;i--){
        product*=i;
    }
    printf("factorial of a no is %d",product);
}