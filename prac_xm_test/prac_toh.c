#include<stdio.h>

void TOWER(int n, char beg, char aux, char end)
{
    if(n<=0)
    printf("\nIllegal entry.");
    else if(n==1)
    printf("\n%c to %c",beg,end);
    else
    {
        TOWER(n-1,beg,end,aux);
        TOWER(1,beg,aux,end);
        TOWER(n-1,aux,beg,end);
    }
} 

void main()
{
    int n;
    char A,B,C;
    printf("Enter the no of disc:\n");
    scanf("%d",&n);
    printf("%d disc TOH:\n",n);
    TOWER(n,'A','B','C');
}