#include<stdio.h>
void namaste();
void nomoskar();

int main()
{
    printf("Enter 'h' for hindi and 'a' for assamese : \n");
    char ch;
    scanf("%c",&ch);
    if(ch=='h'){
        namaste();
    }
    else{
        nomoskar();
    }
    
    return 0;
}

void namaste(){
    printf("Namaste Sir");
}
void nomoskar(){
    printf("Nomoskar Sir");
}
