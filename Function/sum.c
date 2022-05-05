/// sum of two number using function

#include<stdio.h>
int sum(int a,int b);

int main()
{
    int a,b;
   printf("Enter the 1st digit: ");
   scanf("%d",&a);
   printf("Enter the 2nd digit: ");
   scanf("%d",&b);
   
   int s=sum(a,b);
   printf("Sum is = %d",s);
    return 0;
}

int sum(int a,int b){
    return a+b;
} 
