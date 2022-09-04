#include<stdio.h>
int main()
{                   
    int a,b,c,avg ;
    printf("Enter the marks of three subject");
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3;
    if(avg>75)
    {
        printf("distinction") ;
    }
    else if(avg>60 && avg<70)
    {
        printf("1st division");
    }
    else if(avg>50 && avg<60)
    {
        printf ("2nd devision");
    }
    else if(avg>35 && avg<50 )
    {
      printf("3rd devision")  ;
    }
    else
    {
     printf("fail");
    }
    return(0);
}