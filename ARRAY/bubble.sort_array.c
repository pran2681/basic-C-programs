//WAP TO BUBBLE SORT THE ELEMENT OF AN ARRAY

#include<stdio.h>
int main()
{
    int size,i,j,temp;
    
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    
    
    printf("Enter elements to the array: ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    

    for(i=0;i<size-1;i++){
        for(j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
    printf("Sorted array are: ");
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
