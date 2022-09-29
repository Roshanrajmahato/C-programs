// avrage of n number
#include<stdio.h>
int main()
{
    int n,x,avg;
    printf("Enter the value of n ");
    scanf("%d",&n);
    x=(n*(n+1))/2;
    avg=x/n;
    printf("%d",avg);
    return(0);

}