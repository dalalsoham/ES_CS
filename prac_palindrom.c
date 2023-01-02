#include<stdio.h>
int main()
{
    int n,r,sum=0,temp;
    printf("Enetr the number:\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("it is a palindrom.\n");
    }
    else
    {
        printf("it is not a palindrom.\n");
    }
    return 0;
}