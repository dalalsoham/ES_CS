#include<stdio.h>
int main()
{
    int n,r,sum=0,k=n;
    printf("Enter the number:\n");
    scanf("%d",&n);

    while(k!=0)
    {
        r=k%10;
        int f=fact(r);
        k=k/10;
        sum=sum+f;
    }

    if(sum==n)
    {
        printf("strong no.\n");
    }
    else
    {
        printf("not strong no.\n");
    }

    return 0;
}

int fact(int r)
{
    int mul=1;
    for(int i=1;i<=r;i++)
    {
        mul=mul*i;
    }
    return mul;
}