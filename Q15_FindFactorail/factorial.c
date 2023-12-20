#include<stdio.h>
#include<conio.h>

int Factorial(int);

void main()
{
  
  int i , n , fact =1;
  printf("Enter the number you want the factorail : ");
  scanf("%d" ,&n);

// iterative method 
  for(i =1;i<=n;i++)
  {
    fact *=i;
  }

  printf("The factorail of %d is %d using iterative approch ",n,fact);

  // recursive function calling 
  int factorial = Factorial(n);
  printf("\nThe factorail of %d is %d using recursive approch ",n,factorial);
}

// recursive method 
int Factorial(int n)
{
  if(n == 1)
  return 1;

  return n * Factorial(n-1);
}