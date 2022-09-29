// it is a pallindrome programm 1221 its reverse is also same
#include<stdio.h>
int main()
{
    int n,a,b,i,rev;
    rev=0;
    printf("Enter a number ");
    scanf("%d",&n);
    a=n;                           //for  comparing with reverse number
    for (i=1;i<=n;i++)
    {
        b=n%10;                    //for getting remainder
        rev=(rev*10 + b );   //for storing the reverse number
        n=n/10;   // for getting quitioent
    }
    if (rev==a)
    {
        printf(" it is an palindrome: %d",a);  
    }
    else
    {
        printf(" it is not a palindrome : %d",a);
    }
    return(0);

}