#include<stdio.h>
int main()
{
    int yr;
    printf("enter the year");
    scanf("%d",&yr);
    if (yr%100==0)
    {
        if (yr%400==0)
        printf("Leap year ");
        else 
        printf("It is not a leap year");
    }
    else
    {
        if (yr%4==0)
        printf("leap year");
        else
        printf("it is not a leap year");
    }  
    return(0);
}