#include<stdio.h>

void TOH(int n, char rodA, char rodB, char rodC)
{
    if(n==1)
    {
        printf("Move disk 1 from rod %c to rod %c",rodA,rodB);
        return;
    }
    TOH(n-1, rodA,rodB,rodC);
    printf("\nMove disk %d from rod %C to rod %c\n",n,rodA,rodB);
    TOH(n-1,rodC,rodB,rodA);
}

int main()
{
    int no_of_disks;
    printf("Enter number of disks:\n");
    scanf("%d",&no_of_disks);
    TOH(no_of_disks,'A','B','C');
    return 0;
}