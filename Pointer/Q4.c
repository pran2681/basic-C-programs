///C program to input and print array element using pointer


#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    int *ptr=arr;

    printf("Enter element is the array: ");
    for (int i=0;i<n;i++){
        scanf("%d",ptr);
        ptr++;
    }
    ptr=arr;

    printf("Elements in the array are : ");
    for (int i=0;i<n;i++){
        printf("%d\t",*ptr);
        ptr++;
    }
    return 0;
}