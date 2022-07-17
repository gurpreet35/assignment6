// Write a program to calculate factorial of a number
#include<stdio.h>
int main(){
    int fact=1,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for (int i =1; i <=n; i++)
    {
        fact*=i;
    }
    printf("%d",fact);
    return 0;

    
}