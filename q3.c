#include <stdio.h>
int main()
{
    int arr[10],i,sum1=0,sum2=0;
    printf("Enter 10 numbers:- \n");

    for (i=0;i<=9;i++)
    scanf("%d",&arr[i]);

    for (i=0;i<=9;i++)
    {
        if (arr[i]%2==0)
        sum1=sum1+arr[i];

        else
        sum2=sum2+arr[i];
    }

    printf("Sum of even numbers: %d\n",sum1);
    printf("Sum of even numbers: %d\n",sum2);
    
    return 0;
}