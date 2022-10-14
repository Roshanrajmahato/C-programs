//  SUM OF SERIES 1 + 1/2 + 1/3 + 1/4 + 1/5 + .......+ 1/n
#include<stdio.h>
int main()
{
    float n ,i,sum;
    sum=0;
    printf("enter the value of n ");
    scanf("%f",&n);
    for (i=1;i<=n;i++)
    {
        sum =sum+  1/i;
    }
    printf("summition of this series: %d",sum);
    return(0);

}