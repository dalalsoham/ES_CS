#include<stdio.h>
int main()
{
    int n,r,sum=0,temp;
    printf("Enetr the no:\n");
    scanf("%d",&n);
    temp=n;

    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if (temp==sum)
    {
        printf("armstrong.\n");
    }
    else
    {
        printf(" not armstrong.\n");
    }
    
    return 0;
}