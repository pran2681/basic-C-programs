//// Calculate the price of something after adding 18% GST

#include<stdio.h>
void printValue(float value);
int main()
{
    float price;
    printf("Enter the price the product: ");
    scanf("%f",&price);
    printValue(price);
    return 0;
}

void printValue(float value){
    value=value+(0.18*value);
    printf("Final price after added GST is is = %.2f",value);
}