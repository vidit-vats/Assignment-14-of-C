#include <stdio.h>
int main()
{
    float arr[10],sum=0;
    int i;
    float avg;
    printf("Enter Data: - \n");
    
    for (i=0;i<=9;i++)
    scanf("%f",&arr[i]);

    for (i=0;i<=9;i++)
    sum=sum+arr[i];

    avg=sum/10;

    printf("Average of 10 numbers: %.2f\n",avg);
    return 0;
}