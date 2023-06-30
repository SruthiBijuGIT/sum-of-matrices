#include<stdio.h>
int main()
{
 int a1[10][10],a2[10][10],i,j,c,r,sum[10][10];
 printf("\n\nEnter the number of rows and columns of a matrix:\n");
 scanf("%d%d",&r,&c);
 printf("Input elements in the first matrix:\n");
 for(i=0;i<r;i++)
for(j=0;j<c;j++)
  scanf("%d",&a1[i][j]); 
printf("Input elements in the second matrix:\n");
for(i=0;i<r;i++)
  for(j=0;j<c;j++)
  scanf("%d",&a2[i][j]);
  printf("sum of entered matrix is:\n");
   for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
sum[i][j]=a1[i][j]+a2[i][j] ;
printf("%d\t",sum[i][j]);
 }
 printf("\n");
}
 return 0;
}
