#include<stdio.h>
int main()
{
    int num , i=1;
    printf("Enter any integer:\n");
    scanf("%d",&num);
    printf("\nList of Natural numbers from 1 to %d are:\n",num);
    while (i<=num) 
    {
        printf("%d\t",i);
        i++;
    }
    
    return 0;
}