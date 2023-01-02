#include<stdio.h>
#include<conio.h>
int getgcd(int a,int b);
int main()
{
    int n1,n2,gcd,lcm;
    printf("Enter the number:\n");
    scanf("%d %d", &n1 , &n2);

    gcd = getgcd(n1,n2);
    lcm=(n1*n2)/gcd;

    printf("GCd of %d and %d is %d\n",n1,n2,gcd);
    printf("lcm of %d and %d is %d\n",n1,n2,lcm);
    getch();
    return 0;
}

int getgcd(int a,int b) {
    if(b==0)
    {
        return a;
    }
    else
    {
        return getgcd(b,a%b);
    }
}

