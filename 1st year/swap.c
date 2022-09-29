// swaping of two number by third varaible
#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter the two number ");
    scanf("%d %d",&a,&b);
    c=a;      //c get the value of a,and a is vacent 
    a=b;         //now a get the value of b ,and b is vacent
    b=c;             // now b is taken the value c (which is taken the value of a)
    printf("%d%d",a,b); //printing the swapping value
    return(0);
}