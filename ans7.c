// Write a program to count digits in a given number
#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for (;n>0;)
    {
        sum=sum+n%10;
        n=n/10;
    }
    printf("Sum of given digit number: %d",sum);
    return 0;
}                