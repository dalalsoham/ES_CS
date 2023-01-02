#include<stdio.h>
int primeorNot(int);
int main()
{
    int num,prime;
    printf("Enter the number:\n");
    scanf("%d",&num);
    prime = primeorNot(num);
    if (prime==1)
    {
        printf("The number is a prime number.\n",num);
    }
    else
    {
        printf("The number is not a prime number.\n",num);
    }
}
int primeorNot(int num)
    {
        int i=2;
        while (i<num/2)
        {
            if(num%i==0)
            return 0;
            else
            i++;
        }
         return 1;    
    }
    