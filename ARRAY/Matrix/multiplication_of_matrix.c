
#include <stdio.h>

int main()
{
   int A[3][3];
   int B[3][3];
   int C[3][3];
   
   printf("Enter the elements in the A array (3x3): \n");
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           scanf("%d",&A[i][j]);
       }
   }
   
  printf("Enter the elements in the B array (3x3): \n");
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           scanf("%d",&B[i][j]);
       }
   }
   
   ///Sum logic
   printf("Finally the sum of the A and B array are: \n");
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           C[i][j]=A[i][j]*B[i][j];
           printf("%d\t",C[i][j]);
       }
       printf("\n");
   }
   
   

    return 0;
}
