#include<stdio.h>
int main()
{
    int yr;
    printf("Enter a year:\n");
    scanf("%d", &yr);

    //leap yr if perfectly div by 400

    if (yr%400==0)
    {
        printf("%d is a leap year.", yr);
    }

    //not a leap yr div by 100

    else if (yr%100==0)
    {
        printf("%d is not a leap year.", yr);
    }

    //div by 4

    else if (yr%4==0)
    {
        printf("%d is a leap year.", yr);
    }
    //all other yrs are not leap yr
    else
    {
        printf("%d is not a leap yr.", yr);
    }
    
    return 0;
}