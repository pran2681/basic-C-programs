//WAP TO PRINT ALL THE UNIQUE ELEMENT IN THE ARRAY


#include<stdio.h>
int main()
{
    int size,i,j,count;
    
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
        count=1;
        for(j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }
        printf("Unique element in the array are: ");
    for(i=0;i<size;i++){
        if(freq[i]==1){
        printf("%d",arr[i]);
        }
    }
    return 0;
}
