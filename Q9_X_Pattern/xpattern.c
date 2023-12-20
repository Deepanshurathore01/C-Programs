#include<stdio.h>
#include<conio.h>

void main()
{
  int n , i , j ,count;
  printf("Enter n : ");
  scanf("%d",&n);
  count = n*2 -1;
  for( i=1;i<=count;i++)
  {
    for(j =1;j<=count;j++)
    {
      if(i == j || (j== count -i +1))
      {
        printf("*");
      }
      else
      printf(" ");
    }
    printf("\n");
  }
}