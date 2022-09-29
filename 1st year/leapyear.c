// IT IS A LEAP YEAR PROGRAM 
#include<stdio.h>
int main()
{
    int yr;
    printf("enter the year");
    scanf("%d",&yr);
    if (yr%4==0)          // if the year is devisible by 4 it is leap year
    {
        printf("leap year");
    }
    else
    {
        printf("it is not a leap year");
    }
    return(0);
}