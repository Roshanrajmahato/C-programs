// it is a program of prime number 
#include<stdio.h>
int main()
{
    int n ,count ,i;
    printf("enter the number");
    scanf("%d",&n);
    count=0;
    for (i=1;i<=n ;i++)  
    {                       // it check all the number from i=1 to i=n ,
        if (i%n==0)          //in which i divisible by n and gives remainder 0     ex:-2//10
        count++;              //if it gives it incease count by 1    
    }                        
    if(count==1)
    {
        printf("it is a prime number");
    }
    else
    {
         printf("it is not a prime number");
    }

}