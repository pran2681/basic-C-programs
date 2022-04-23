 //WAP TO DELETE THE DUPLICATE ELEMENT FROM ARRAY
 
 #include<stdio.h>
int main()
{
    int size,i,j,k;
    
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    
    
    printf("Enter elements to the array: ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    

    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                for(k=j;k<size-1;k++){
                    arr[k]=arr[k+1];
                }
                size--;
                
                j--;
            }
        }
    }
   printf("Array after delet the duplicate element: ");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}