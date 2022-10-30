#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n=10,arr[10],k,i;
    printf("Enter k: ");
    scanf("%d",&k);

    if (k>10)
    {
        printf("Error!\n");
        exit(1);
    }
    
    printf("Enter Data: -\n");

    for (i=0;i<=k-1;i++)
    scanf("%d",&arr[i]);

    printf("Original Order: ");
    for (i=0;i<=k-1;i++)
    printf("%d ",arr[i]);

    printf("\n");

    printf("Reverse Order: ");

    for (i=k-1;i>=0;i--)
    printf("%d ",arr[i]);

    return 0;
}