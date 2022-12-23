//array
#include<stdio.h>
void main()
{
    int a[5],i;
    printf("enter the array element");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    for (i=0;i<5;i++) // For printing the array
    {
        printf("\n array element at index %d is: %d",i,a[i]);
    }
    for(i=4;i=0;i--) // printing array in reverse order
    {
        printf("\n array element at index %d is: %d",i,a[i]);
    }


}