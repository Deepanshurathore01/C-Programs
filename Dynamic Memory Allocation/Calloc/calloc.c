#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i, n ,*ptr;
  printf("Enter the size : ");
  scanf("%d",&n);
  ptr = (int *)calloc(n,sizeof(int));
  // printf("Enter values :");
  // for(i =0;i<n;i++)
  // {
  //   scanf("%d",(ptr+i));
  // }
  printf("The enterd values are : ");
  for(i=0;i<n;i++)
  {
    printf("%d ",*(ptr+i));
  }
  free(ptr);
  return 0;
}