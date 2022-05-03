/// C program to get memory address using adress of opertaors

#include<stdio.h>
int main()
{
    int integer=10;
    char character = 'c';
    float rs=100.00;
    
    printf("Integer is = %d and adress is = %p\n",integer,&integer);
    printf("character is = %c and adress is = %p\n",character,&character);
    printf("rs is = %0.2f and adress is = %p",rs,&rs);
    return 0;
}