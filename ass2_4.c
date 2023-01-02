#include<stdio.h>
int main()
{
    int a,b,c,t,max;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d",&a,&b,&c);

    t=a>b?a:b;
    max=t>c?t:c;

    printf("Maximum value is %d\n",max);
    return 0;
}