#include<stdio.h>
int main()
{
    int n,reminder,total=0,temp;
    printf("Enter the number:\n");
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
        reminder=n%10;
        total=total+(reminder*reminder*reminder);
        n=n/10;
    }
    if (temp==total)
    {
        printf("Armstrong number.\n");
    }
    else
    {
        printf(" Not Armstrong number.\n");
    }
    
    
    return 0;
}