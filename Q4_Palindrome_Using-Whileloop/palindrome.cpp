#include<stdio.h>
#include<conio.h>

int main()
{
  int num , temp , ans =0;
  printf("Enter the number : ");
  scanf("%d",&num);
  temp =num;
 while(num > 0)
  {
    int dig =num%10;
    ans = ans * 10+dig;
    num = num/10;
  }
 if(temp == ans)
 printf("the num is palindrome");
 else
 printf("the num is not palindrome");

}