#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i, n ,*ptr;
  printf("Enter the size : ");
  scanf("%d",&n);
  ptr = (int *)calloc(n,sizeof(int));
  printf("Enter values :");
  for(i =0;i<n;i++)
  {
    scanf("%d",(ptr+i));
  }
  printf("\n Enter the updated value of n : ");
  scanf("%d",&n);
  int *ptr1 =(int *)realloc(ptr,n*sizeof(int));
  printf("\n the prev address : %d, the new add : %d",ptr,ptr1);
  printf("\nThe enterd values are : ");
  for(i=0;i<n;i++)
  {
    printf("%d ",*(ptr1+i));
  }
  free(ptr1);
  return 0;
}