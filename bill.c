#include<stdio.h>
int main()
{
    int price,bill;
    printf("Enter no of units:\n" );
    scanf("%d",&price);
    if(price<=200)
    {
        bill=price*0.50;
    }
    if(price>200 && price<=400)
    {
        bill=((price-200)*0.65)+100;
    }
    if(price>400 && price<=600)
    {
        bill=((price-400)*0.80)+250;
    }
    if(price>600)
    {
        bill=((price-600)*1.25)+425;
    }
    printf("bill is:%d\n",bill);
    return 0;
}