#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the size for the array[row]: ");
    scanf("%d",&r);
    printf("Enter the size for the array[column]: ");
    scanf("%d",&c);
    int arr[r][c];
    
    printf("Enter the value in the array: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    
    printf("The final 2D array are : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",arr[i][j]);
            if(j==r){
                printf("\n");
            }
        }
    }
    
    return 0;
}