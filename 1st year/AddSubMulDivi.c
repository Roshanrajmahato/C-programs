//  It is program of addition subtraction multiplication and division of two number on user choice
#include<stdio.h>
int main()
{
    int a,b,x,y;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    printf("Enter your choice");
    printf("\n 1 Addtion \n 2 Subtraction \n 3 Multiplication \n 4 Divison"); 
    scanf("%d",&x);

    if(x=1)
    {
       y=a+b;
       printf("Addition of two number is %d",y);
    }
    else if (x=2)
    {
           y=a-b;
           printf("Subtraction of two number is %d",y);

    }
    else if (x=3)
    {
        y=a*b;
        printf("Multiplecation of two number is %d",y);
    }

    else (x=4) ;
    {
        y=a/b;
        printf("Division of two number is %d",y);
    }
    return(0);
}
