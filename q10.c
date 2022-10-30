#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a1[100],a2[100],i,n,k;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    if (n>100)
    {
        printf("Error!\n");
        exit(0);
    }

    printf("Enter Data: -\n");
    for (i=0;i<=n-1;i++)
    scanf("%d",&a1[i]);

    printf("\n");

    printf("Array 1: ");
    for (i=0;i<=n-1;i++)
    printf("%d ",a1[i]);

    printf("\n");

    printf("Array 2: ");

    for (i=0;i<=n-1;i++)
        a2[i]=a1[i];

        for (i=0;i<=n-1;i++)
        printf("%d ",a2[i]);

return 0;
}