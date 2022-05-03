/// C Program to add,substract,multiple,divide two numbers using pointers

#include<stdio.h>
int main()
{
   int num1,num2,sum,substract,divide,multiple;
   int *ptr1,*ptr2;
   
   printf("Enter the value of the two number: ");
   scanf("%d %d",&num1,&num2);
   
   ptr1=&num1;
   ptr2=&num2;
   
   sum=(*ptr1)+(*ptr2);
   substract=(*ptr1)-(*ptr2);
   multiple=(*ptr1)*(*ptr2);
   divide=(*ptr1)/(*ptr2);
   
   printf("Sum of the two number is = %d\n",sum);
   printf("substract of the two number is = %d\n",substract);
   printf("multiple of the two number is = %d\n",multiple);
   printf("divide of the two number is = %d",divide);
    return 0;
}
