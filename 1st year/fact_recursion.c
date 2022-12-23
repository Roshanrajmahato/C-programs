// it is the program of factorial of no by recursion
#include<stdio.h>
int factorial(int n); // #function declaration , return_data_type...fuction_name..(pameter_list)
int main() 
{
    int num ,fact;
    printf("\n enter any integer number");
    scanf("%d",&num);
    fact =factorial(num); // #function calling ,user_define_fuction(factorial) and stored its return value in fact
    printf("\n factorial of %d is: %d",num,fact);
    return(0);
}
int factorial(int n) // #function defination  
{
    if(n==0)
       return(1);
    return(n*factorial(n-1));   // fuction calling itself:recursion 
}




