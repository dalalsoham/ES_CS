#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer:\n");
    scanf("%d",&num);
    //true if num is perfectly div by 2
    if (num%2==0) 
    {
        printf("%d is even.\n",num);
    }
    else
    {
        printf("%d is odd.\n",num);
    }
    
    return 0;
}