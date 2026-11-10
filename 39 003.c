#include<stdio.h>
void main()
{
 int A,B,C,n,i,j;
 printf("Enter the size of n=");
 scanf("%d",&n);
 printf("Enter 4 values for matrix A:");
 for(i=0;i<2;i++)
     for(j=0;j<2;j++)
        scanf("%d",&A);
 printf("Enter 4 values for matrix B:");
 for(i=0;i<2;i++)
     for(j=0;j<2;j++)
        scanf("%d",&B);
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   C=0;
   for(int k=0;k<2;k++)
      C=C+A*B;
  }
 }


printf("Multiplication=\n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
        printf("%d\t",C);
    printf("\n");
  }
}


