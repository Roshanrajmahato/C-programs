#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the three number");
    scanf("%d %d %d",&a,&b,&c);
    d=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("%d",d);
    return(0);
    
}