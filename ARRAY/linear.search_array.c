// QSN: C PROGRAM TO LINEAR SEARCH IN ARRAY

#include<stdio.h>
void main()
{
    int i,n,x,k=0;
    
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    
    int arr[n];
    
    printf("Enter the elements in array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d",&x);
    
    for(i=0;i<n;i++){
        if(x==arr[i]){
            k=1;
            break;
        }
    }
    if(k==1){
        printf("The element found at index %d",i);
    }
    else("The element not found");
}

