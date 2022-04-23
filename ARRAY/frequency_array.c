//WAP TO PRINT FREQUENCY IN ARRAY


#include<stdio.h>
int main()
{
    int size,i,j,k;
    
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    int freq[size];
    
    
    printf("Enter elements to the array: ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }

    for(i=0;i<size;i++){
        k=1;
        for(j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                k++;
                freq[j]=0;
            }
        }if(freq[i] !=0){
            freq[i]=k;
        }
    }
    
    printf("Frequncy of elements in array: ");
    for(i=0;i<size;i++)
    {
        if(freq[i] !=0){
        printf("%d occurs %d times\n", arr[i], freq[i]);
            
        }
    }
    return 0;
} 