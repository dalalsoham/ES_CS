#include<stdio.h>

void TOH(int n, char x, char y, char z)
{
    if(n>0)
    {
        TOH(n-1,x,y,z);
        printf("\n %c to %c",x,y);
        TOH(n-1,z,y,x);
    }
}

void main()
{
    int n;
    printf("How many plates do you want?:\n");
    scanf("%d",&n);
    TOH(n,'A','B','C');
}