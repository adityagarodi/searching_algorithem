#include<stdio.h>
int main()
{
    int a[10],i,j,n,t,key,low,mid,high,f=0;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter Elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("\nSorted arrays:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    
    printf("\nEnter Element you want to search:");
    scanf("%d",&key);
    low=0;
    high=n-1;
    
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            f=1;
            break;
        }
        if(key<a[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    
    if(f==1)
    {
        printf("Element is found\n");
    }
    else
    {
        printf("Element is not found\n");
    }
    return 0;
}
