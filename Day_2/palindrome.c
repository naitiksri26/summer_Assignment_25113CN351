#include<stdio.h>
int main(){
    int n,i,rev=0,rem;
    printf("enter a no");
    scanf("%d",&n);
    i=n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("reverse of a no is  %d\n",rev);
    if(rev==i){
        printf("%d is a palindrome",i);
    }
    else{
         printf("%d is not a palindrome",i);
    }
    return 0;
}
