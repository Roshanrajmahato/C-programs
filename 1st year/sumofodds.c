#include<stdio.h>
int main()
{
    int sum ,n,i ;
    sum=0 ;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for (i=1;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    printf ("sum of odd are: %d",sum);
    return(0);

}
