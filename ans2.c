//Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main(){
    int sum=0, N;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for (int i = 1; i <= 2*N; i++)
    {    if(i%2==0){
        sum=sum+i;
    }
    }
    printf("Sum of first even Natural Number is %d",sum);
    return 0;
}