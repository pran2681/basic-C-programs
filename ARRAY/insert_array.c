//WAP TO INSERT ELEMENT IN ARRAY


#include<stdio.h>
int main()
{
    int size,i,nnum,posi;
    
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    
    printf("Enter elements to the array: ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Entre the element to insert: ");
    scanf("%d",&nnum);
    printf("Enter the pposition : ");
    scanf("%d",&posi);
    
    if(posi>size+1||posi<=0){
        printf("Please enter position b/w 1 to %d",size);
    }
    else{
        for(i=size;i>=posi;i--){
            arr[i]=arr[i-1];
        }
        arr[posi-1]=nnum;
        size++;
    }
       
    printf("The array after insertion : ");
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}

