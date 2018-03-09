
#include <stdio.h>

int main()
{
    int i,n,a[10];
    printf("Enter no of elements:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for (i = 0; i < n; i++) 
        {
            scanf("%d", &a[i]);
        }
    printf("odd nos:");
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d\t",a[i]);
        }
    }
    printf("\n");
    printf("even nos:");
    
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d\t",a[i]);
        }
    }

    
    return 0;
}



