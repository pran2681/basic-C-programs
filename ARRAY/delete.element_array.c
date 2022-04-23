//WAP TO DELETE ELEMENT FROM AN ARRAY

#include<stdio.h>
int main()
{
    int size,i,posi;
    
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    
    printf("Enter elements to the array: ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    

    printf("Enter the element position to delete : ");
    scanf("%d",&posi);
    
    if(posi<0||posi>size){
        printf("Please enter position b/w 1 to %d",size);
    }
    else{
        for(i=posi-1;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        size--;
    }
       printf("The array after deletion: ");
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}