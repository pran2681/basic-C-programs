//QSN: WAP in C TO PRINT ALL NEGATIVE NUMBER IN C 



#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    int size;
    int arr[MAX_SIZE];
    
    printf("Entr the size of array: ");
    scanf("%d",&size);
    
    printf("Entr %d elements in array : ",size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("All negative Elements in array are: ");
    for(int i=0;i<size;i++){
        if(arr[i]<0){
        printf("%d,",arr[i]);
        }
    }
    return 0;
}


//DESCENDIND 

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;}
        }
    }
    printf("The elements in descending order are: ");
    for(int i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
    return 0;
}
