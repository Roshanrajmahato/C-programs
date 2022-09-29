// it is the program of factorial
#include<stdio.h>
int main()
{
    int n,i,f;
    f= 1 ;   // in  starting
    i=1;
    printf("Enter value of n ");
    scanf("%d",&n);
    for (i;i<=n;i++)
    {
        f=f*i;  //for storing factorial in f
    }
    printf("Factorial of n number is : %d",f);
    return(0);
}