#include<stdio.h>
#include<conio.h>

int Fibonacci(int n);

void main()
{
  int n ,i;
  printf("Enter the term till u want the fibonaci series of : ");
  scanf("%d",&n);

 
 for(i =0;i<n;i++)
 {
    printf("%d ",Fibonacci(i));
 }


}

int Fibonacci(int n){
  if(n == 0)
  return 0;
  if(n == 1)
  return 1;

  return Fibonacci(n-1)+Fibonacci(n-2);
}