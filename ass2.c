#include<stdio.h>
int main()
{
    int p,q;
    int sum , sub , mul , mod ;
    float div ;
    //it will take two int no 

    printf("Enter any two positive no:\n");
    scanf("%d %d",&p,&q);
    //it will perform all arithmatic opp

    sum = p+q;
    sub= p-q;
    mul= p*q;
    div= (float)p/q;
    mod= p%q;
    //final output of the prohram
    printf("\n");
    printf("add of  %d+%d=%d\n",p,q,sum);
    printf("sub of  %d-%d=%d\n",p,q,sub);
    printf("mul of  %d*%d=%d\n",p,q,mul);
    printf("div of  %d/%d=%f\n",p,q,div);
    printf("mod of  %d %% %d=%d\n",p,q,mod);
    return 0;
}