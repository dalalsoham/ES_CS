#include<stdio.h>
// #include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
float st[MAX];
int top = -1;
void swap(int arr[],int a,int b)
{
    int t=arr[a];
    arr[a]=arr[b];
    arr[b]=t;
}
void bubbleSort(int ar[],int n)
{
    int i ,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(ar[j]>ar[j+1])
            swap(ar,j,j+1);
        }
    }
}
int binarySearch(int ar[],int l,int h,int e)
{
    if(h>=1)
    {
        int mid=1+(h-1)/2;
        if(ar[mid]==e)
        return 1;
        if(ar[mid]>e)
        return binarySearch(ar,1,mid-1,e);
        else
        return binarySearch(ar,mid+1,h,e);
    }
    return 0;
}
void push(float st[], float val)
{
    top++;
    st[top]=val;
}
float pop(float st[])
{
    float val = st[top];
    return val;
}
float evaluatePostExpression(char exp[])
{
    int i=0;
    float op1,op2,value;
    while(exp[i]!='\0')
    {
        if(isdigit(exp[i]))
            push(st,(float)(exp[i]-'0'));
        else
        {
            op2=pop(st);
            op1=pop(st);
            switch(exp[i])
            {
                case '+':
                value=op1+op2;
                break;

                case '-':
                value=op1-op2;
                break;

                case '/':
                value=op1/op2;
                break;

                case '*':
                value=op1*op2;
                break;

                case '%':
                value=(int)op1 % (int)op2;
                break;


            }
            push(st,value);
        }
        i++;
    }
    return(pop(st));
}
int main()
{
    int i,j,n,m;
    int a[5];
     char exp[100];
    printf("enter 5 numbers divisible by 11 in unsorted manner\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("\nthe 5 numbers divisible by 11 entered by Rohit are \n:");
    for(i=0;i<5;i++)
    printf("%d ",a[i]);
    bubbleSort(a,5);
    printf("\nthe 5 numbers divisible by 11 entered by Rohit in sorted manner \n:");
    for(i=0;i<5;i++)
    printf("%d ",a[i]);
    // printf("enter 5 numbers divisible by 11 in unsorted manner\n");
    printf("postfix expression entered by ayan\n");
    gets(exp);
    printf("postfix expression entered by ayan\n");
    puts(exp);
    return 0;
}