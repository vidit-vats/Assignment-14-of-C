// second largest in array 
// implemented the program using buuble sort 
#include <stdio.h>
int main()
{
    int a[10],i,j,temp,swap=0;
    printf("Enter 10 numbers:- \n");

    for (i=0;i<=9;i++)
    scanf("%d",&a[i]);
    
    for (i=0;i<=7;i++)
    {
        for (j=0;j<=8;j++)
        {
            if (a[j]>a[j+1])
            {
                swap=a[j];
                temp=a[j+1];
                a[j]=temp;
                a[j+1]=swap;
            }
        }
    }

    printf("Sorted Array: ");
    for (i=0;i<=9;i++)
    printf("%d ",a[i]);

    printf("Second Largest Element:%d\n",a[8]);
     return 0;
}