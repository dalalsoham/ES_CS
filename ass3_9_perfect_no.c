#include<stdio.h>
int main()
{
    int i,num,sum=0;
    printf("Enter the number:\n");
    scanf("%d",&num);

    for ( i = 1; i < num; i++)
    {
        if (num%i==0)
        {
            sum=sum+i;
        }
        
    }
    if (sum==num)
    {
        printf("It is a perfect number.\n",num);
    }
    else
    {
        printf("It is not a perfect number.\n",num);
    }
    return 0;
}