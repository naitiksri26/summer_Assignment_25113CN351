#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("enter no of numbers");
    scanf("%d",&n);
    for(i=1;i<n+1;i++){
        sum+=i;
    }
    printf("sum is %d",sum);

}