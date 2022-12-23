// COMPOUND INTEREST 
#include<stdio.h>
#include<math.h>
int main()
{

    int p,r,t,x,ci;
    printf("Enter principal,rate,time");
    scanf("%d %d %d",&p,&r,&t);
    x=pow(1+r/100,t);
    ci=p*x-p;
    printf("Compound interest is %d",ci);
    return(0);
}