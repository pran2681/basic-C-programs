///Qsn

///1st student marks=[10,20,30]
//// 2nd student marks=[11,22,33]

//CODE

#include<stdio.h>
int main()
{
    int marks[2][3];
    marks[0][0]=10;
    marks[0][1]=20;
    marks[0][2]=30;
    
    marks[1][0]=11;
    marks[1][1]=22;
    marks[1][2]=33;
    
    
    printf("\nMArks of 1st stdent 1st sub = %d",marks[0][0]);
    printf("\nMArks of 1st stdent 2nd sub = %d",marks[0][1]);
    printf("\nMArks of 1st stdent 3rd sub = %d",marks[0][2]);
    printf("\n");
    printf("\nMArks of 2nd stdent 1st sub = %d",marks[1][0]);
    printf("\nMArks of 2nd stdent 2nd sub = %d",marks[1][1]);
    printf("\nMArks of 2nd stdent 3rd sub = %d",marks[1][2]);
    
    
    return 0;
}