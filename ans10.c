//Write a program to reverse a given number
#include<stdio.h>
int main(){
    int rev=0,i,n;
    printf("Enter your number:");
    scanf("%d",&n);
    i=n;
    while (n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    printf("Reverse of %d is :%d",i,rev);
    return 0; 
}