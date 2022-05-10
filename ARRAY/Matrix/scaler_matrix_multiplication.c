
#include <stdio.h>

int main()
{
   int A[3][3];
   int B[3][3];
   
   
   printf("Enter the elements in the A array (3x3): \n");
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           scanf("%d",&A[i][j]);
       }
   }
   
  printf("Enter any number to multiply: \n");
  int n;
  scanf("%d",&n);
  
  printf("The final matrix after multiplication is:\n");
  
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           B[i][j]=n*A[i][j];
           printf("%d\t",B[i][j]);
       }
       printf("\n");
   }
  
   
   

    return 0;
}
