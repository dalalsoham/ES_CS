#include<stdio.h>
int main()
{
    int i,fact=1,num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is: %d",num,fact);
    return 0;
}