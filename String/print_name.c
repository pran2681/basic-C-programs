#include<stdio.h>
void printString(char arr[]);
int main()
{
    char printName[]="Pran";
    char printSur[]="Saikia";
    printString(printName);
    printString(printSur);
    
    return 0;
}

void printString(char arr[]){
    for(int i=0;arr[i] != '\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}