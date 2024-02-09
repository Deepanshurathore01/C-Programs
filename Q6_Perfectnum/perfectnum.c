// a perfect number is a positive integer that is equal to the sum of its
// positive divisors, excluding the number itself.
#include<stdio.h>
#include<conio.h>

void main()
{
  int num , i , sum =0;
  printf("Enter a number : ");
  scanf("%d",&num);

  for( i=1;i<num;i++){
    if(num%i == 0)
    sum += i;
  }
  if(sum == num)
  printf("the no is perfect ");
  else 
  printf("the no is not perfect");
  
}