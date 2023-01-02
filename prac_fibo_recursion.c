#include<stdio.h>
int fib(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}

int main()
{
    int nth,term;
    printf("Enter term:\n");
    scanf("%d",&nth);

    term=fib(nth);

    printf("%dth term of fibo series is %d", nth,term);
    return 0;
}