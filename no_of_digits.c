#include<stdio.h>
int main(){
    int n,i,count=0;
    printf("enter a no");
    scanf("%d",&n);
    while(n>0){
        count++;
        n=n/10;
    }
    printf("no of digit is%d",count);
}