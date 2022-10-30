#include <stdio.h>
int main()
{
    int arr[10],i,sum=0;
    printf("Enter Data: - \n");
    
    for (i=0;i<=9;i++)
    scanf("%d",&arr[i]);

    for (i=0;i<=9;i++)
    sum=sum+arr[i];

    printf("Sum of 10 entered numbers is: %d\n",sum);
    return 0;
}