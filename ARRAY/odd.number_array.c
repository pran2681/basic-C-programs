/// WAP TO CALCULATE ODD NUMBER PRESENT IN ARRAY




#include<stdio.h>

int countOdd(int arr[],int n);

int main()
{
    int arr[]={1,2,3,4,5,6};
    printf("%d",countOdd(arr,6));
    return 0;
}

int countOdd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 != 0){
            count++;
        }
    }
    return count;
}

///OUTPUT
