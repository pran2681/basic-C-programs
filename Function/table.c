/// Print table of number using of function

#include<stdio.h>
void printTable(int n);

int main()
{
    int n;
    printf("enter the number to print the table: ");
    scanf("%d",&n);
    printTable(n);
    return 0;
}

void printTable(int n){
    for(int i=1;i<=10;i++){
        printf("5 * %d = %d\n",i,i*n);
    }
}
