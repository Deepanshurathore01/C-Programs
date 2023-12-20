#include<stdio.h>
#include<conio.h>

void main()
{
  int n , temp , sum =0 ;
  printf("Enter the number : ");
  scanf("%d",&n);
  temp =n;
 while(n > 0)
  {
    int dig =n%10;
    sum =  sum +(dig * dig *dig);
    n = n/10;
  }
 if(temp == sum)
 printf("the num is armstrong");
 else
 printf("the num is not armstrong");

}