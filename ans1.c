//Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main(){
    int sum=0, N;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for (int i = 0; i <= N; i++)
    {
        sum=sum+i;
    }
    printf("Sum of first %d Natural Number is %d",N,sum);
    return 0;
}