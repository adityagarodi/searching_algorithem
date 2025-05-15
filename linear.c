#include<stdio.h>

void main()
{
    int n;
    printf("How many numbers you want to add?");
    scanf("%d",&n);
    
    int a[n],i;
    printf("Enter %d Numbers",n);
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    int k,f=0;
    printf("What number you want to search ?");
    scanf("%d",&k);
    
    for(i=0;i<n;i++){
        if(a[i]==k){
            f=1;
            break;
        }
    }
    if(f==1){
        printf("%d is present at %d position",k,i);
        
    }
    else{
        printf("%d is not present in the array",k);
    }
}
