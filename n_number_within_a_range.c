#include<stdio.h>
int main()
{
    int i , starting_value, ending_value;
    printf("Enter the starting value:\n");
    scanf("%d",&starting_value);
    printf("Enter the ending value:\n");
    scanf("%d", &ending_value);

    printf("List of natural no fro %d to %d are:\n",starting_value,ending_value);
    for ( i =starting_value; i <= ending_value; i++)
    {
        printf(" %d\t",i);
    }
    
    return 0;
}