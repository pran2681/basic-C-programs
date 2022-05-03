/// C Program to swap two numbers using pointers

#include<stdio.h>
int main()
{
   int num1,num2,temp;
   int *ptr1,*ptr2;
   
   printf("Enter the value of the two number: ");
   scanf("%d %d",&num1,&num2);
   ptr1=&num1;
   ptr2=&num2;
   
   temp=*ptr1;
   *ptr1=*ptr2;
   *ptr2=temp;
   
   
   
   printf("After swap %d,%d",*ptr1,*ptr2);
    return 0;
}
