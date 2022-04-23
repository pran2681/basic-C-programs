//// WAP in C TO ENTER PRICE OF 3 PRODUCTS AND PRINT THEIR FINAL COST WITH GST


#include <stdio.h>

int main()
{
    float price[3];
    /////float price[]={100.0,200.0,300.0};/short form also correct form//
    printf("Enter the prices of three products : \n");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);
    
    printf("\nFinal price of the products after 18%% Gst are :-\n");
    printf("%.2f \n%.2f\n%.2f",price[0]+(0.18*price[0]),price[1]+(0.18*price[1]),price[2]+(0.18*price[2]));

    

    return 0;
}