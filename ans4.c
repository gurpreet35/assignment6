// Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
int main(){
    int sum=0, N;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for (int i = 1; i <= N; i++)
    {   
        sum=sum+i*i;
    }
    
    printf("sum of squares of first %d natural numbers is %d",N,sum);
    return 0;
}