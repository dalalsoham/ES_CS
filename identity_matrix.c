#include<stdio.h>
int main()
{
    int i,j,column,row,a[10][10],flag=1;
    printf("Enter the rows and column:\n");
    scanf("%d %d",&i,&j);
    printf("Enter the matrix elements:\n");

    for(row=0;row<i;row++)
    {
        for(column=0;column<j;column++)
        {
            scanf("%d",&a[row][column]);
        }
    }

    for(row=0;row<i;row++)
    {
        for(column=0;column<j;column++)
        {
            if (a[row][column] !=1 && a[column][row] !=0)
            {
                flag=0;break;
            }
            
        }
    }

    if (flag==1)
    {
        printf("this is an identity matrix\n");

    }
    else
    {
        printf("this is not an identity matrix\n");
    }
    
    return 0;
}