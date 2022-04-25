#include<stdio.h>
int main()
{
    int r,c,sum=0;
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
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum=sum+arr[i][j];
        }
    }
    
   printf("sum is : %d",sum);
    
    
    return 0;
}