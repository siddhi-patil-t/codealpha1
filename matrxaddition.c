#include<stdio.h>
int main()
{ 
  int a[2][2];
  printf("ENter 1 st matrix elements:\n");
  for(int i=0;i<2;i++)
  {for(int j=0;j<2;j++)
  {
    scanf("%d",&a[i][j]);
  }}
  for(int i=0;i<2;i++)
  {for(int j=0;j<2;j++)
  {
    printf(" %d ",a[i][j]);
  }printf("\n");
}
    
  int b[2][2];
  printf("ENter 2nd matrix elements:\n");
  for(int i=0;i<2;i++)
  {for(int j=0;j<2;j++)
  {
    scanf("%d",&b[i][j]);
  }}
  for(int i=0;i<2;i++)
  {for(int j=0;j<2;j++)
  {
    printf(" %d ",b[i][j]);
  }printf("\n");
}
  int sum[2][2];
  printf("Addition of two matrices is:\n");
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      sum[i][j]=a[i][j]+b[i][j];
    }
  }
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      printf(" %d ",sum[i][j]);
    }printf("\n");
  }
  return 0;
}
