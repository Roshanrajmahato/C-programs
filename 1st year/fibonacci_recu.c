// it is the program of fibonacci series 0 1 1 2 3 5 8 13 21 ........... by recursion
#include<stdio.h>
int fibo(int n); // #function declaration , return_data_type...fuction_name..(pameter_list)
int main()
{
    int n,f,i=1;
    f=0 ;   //  for  fibonacci  series its first number
    printf("enter any integer for fibonacci series");
    scanf("%d",&n);
    for (i;i<=n;i++) // getting loop for n times
    {
        printf(" %d \n",fibo(f));  // #function calling
        f++; // initial it 0 and then its incriment,  which is move to the 'f' again and again  in fibo(f)
    }
    printf("It is the Fibonacci series to the %d",n);
    return(0);
} 
int fibo(int n) // #function defination  
{
    if (n==0)
       return(0);
    else if (n==1)
       return 1; 
    else
    return(fibo(n-1)+fibo(n-2));      // fuction calling itself:recursion
}